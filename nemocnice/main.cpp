#include <iostream>
#include "hospitalChain.h"
#include "patient.h"

using namespace std;

void demoHospital() {
    HospitalChain chain(3);
    chain.AdmitPatient(1, "Alice");
    chain.AdmitPatient(2, "Bob");
    cout << "Patient count: " << chain.getPatientCount() << endl;
    Patient* p = chain.GetPatient(1);
    if (p) {
        cout << "Found patient with id: " << p->getId() << endl;
    }
    chain.DischargePatient(1);
    cout << "Patient count after discharge: " << chain.getPatientCount() << endl;
}

int main() {
    demoHospital();
    return 0;
}
