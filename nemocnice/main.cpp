#include <iostream>
#include "specialHospital.h"

using namespace std;

void demoHospital() {
    std::cout << "Default treatment level: " << Hospital::getDefaultTreatmentLevel() << std::endl;

    std::cout << std::endl;
    // Vytvoreni instanci
    HospitalChain* centers[2];
    centers[0] = new Hospital(3, 2);
    centers[1] = new SpecialHospital(2, 1, 101, "Oncology");

    std::cout << std::endl;

    // 3) Patients and doctors
    centers[0]->AdmitPatient(1, "Alice");
    centers[0]->AdmitPatient(2, "Bob");
    static_cast<Hospital*>(centers[0])->HireDoctor(10, "Dr. Smith");
    static_cast<Hospital*>(centers[0])->HireDoctor(11, "Dr. Jones");
    std::cout << std::endl;
    // 4) Shadowing u GetPatient()
    Patient* p = centers[0]->GetPatient(1);
    if (p) {
        std::cout << "Found patient via shadowing: " << p->getName() << std::endl;
    }
    std::cout << std::endl;
    // 5) Polymorfismus manage pres pole HospitalChain
    for (auto c : centers) {
        c->manage();
    }
    std::cout << std::endl;
    // 6) Pretizeni metody treatPatient
    Hospital* hosp = static_cast<Hospital*>(centers[0]);
    Doctor* d = hosp->GetDoctor(10);
    if (d) {
        d->treatPatient();           // puvodni metoda
        d->treatPatient(3);          // pretizena metoda
    }
    std::cout << std::endl;
    // 7) Trida v roli objektu, upgrade vola metodu improveTreatment
    std::cout << "Upgrading treatment by 2" << std::endl;
    hosp->upgradeTreatment(2);
    std::cout << "New default treatment level: " << Hospital::getDefaultTreatmentLevel() << std::endl;
    p = hosp->GetPatient(2);
    std::cout << "Patient " << p->getName() << " treatment level: " << p->getTreatmentLevel() << std::endl;
    std::cout << std::endl;
    // 8) SpecialHospital ma vlastni metodu nededenou z Hospital
    SpecialHospital* sh = static_cast<SpecialHospital*>(centers[1]);
    sh->printSpecialInfo();
    std::cout << std::endl;
    // 9) Pouklizeni po sobe
    for (auto c : centers) {
        delete c;
    }

}

int main() {
    demoHospital();
    return 0;
}
