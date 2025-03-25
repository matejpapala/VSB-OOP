#include "hospital.h"
using namespace std;

void demoHospital() {
    Hospital hospital(10, 5);
    Patient *p1 = hospital.AdmitPatient(1, "Alice");
    Patient *p2 = hospital.AdmitPatient(2, "Bob");
    
    Doctor *d1 = hospital.HireDoctor(101, "Dr. Smith");
    Doctor *d2 = hospital.HireDoctor(102, "Dr. Johnson");
    
    hospital.applyTreatment();
    hospital.upgradeTreatment(2);
    
    cout << "Patient " << p1->getName() << " treatment level: " << p1->getTreatmentLevel() << endl;
    cout << "Patient " << p2->getName() << " treatment level: " << p2->getTreatmentLevel() << endl;
}

int main() {
    demoHospital();
    return 0;
}
