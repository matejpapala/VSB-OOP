#include <iostream>
#include "hospitalChain.h"
#include "hospital.h"
#include "specialHospital.h"
#include "doctor.h"
#include "patient.h"

using namespace std;

void demoHospital() {
    cout << "Default treatment level: " << Hospital::getDefaultTreatmentLevel() << endl;
    cout << endl;

    // Vytvorení instanci
    Hospital* hosp = new Hospital(3, 2);
    SpecialHospital* sh = new SpecialHospital(2, 1, 101, "Oncology");
    HospitalChain* centers[2] = { hosp, sh };

    cout << endl;
    // 3) Pacienti a doktori
    centers[0]->AdmitPatient(1, "Alice");
    centers[0]->AdmitPatient(2, "Bob");
    hosp->HireDoctor(10, "Dr. Smith");
    hosp->HireDoctor(11, "Dr. Jones");

    cout << endl;
    // 4) Shadowing u GetPatient()
    Patient* p = centers[0]->GetPatient(1);
    if (p) cout << "Found patient via shadowing: " << p->getName() << endl;

    cout << endl;
    // 5) Polymorfismus manage přes pole HospitalChain
    for (auto c : centers) c->manage();

    cout << endl;
    // 6) Pretízení metody treatPatient
    Doctor* d = hosp->GetDoctor(10);
    if (d) {
        d->treatPatient();
        d->treatPatient(3);
    }

    cout << endl;
    // 7) Upgrade lecby
    cout << "Upgrading treatment by 2" << endl;
    hosp->upgradeTreatment(2);
    cout << "New default treatment level: " << Hospital::getDefaultTreatmentLevel() << endl;
    p = hosp->GetPatient(2);
    cout << "Patient " << p->getName() << " treatment level: " << p->getTreatmentLevel() << endl;

    cout << endl;
    // 8) SpecialHospital print
    sh->printSpecialInfo();

    cout << endl;
    // 9) cleanup
    delete hosp;
    delete sh;
}

int main() {
    demoHospital();
    return 0;
}
