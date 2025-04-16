#include <iostream>
#include "hospitalChain.h"
#include <string>
using namespace std;

HospitalChain::HospitalChain(int numberOfPatients) {
    cout << "HospitalChain constructor was called" << endl;
    patients = new Patient*[numberOfPatients];
    patientCount = 0;
}

HospitalChain::~HospitalChain() {
    cout << "HospitalChain destructor was called" << endl;
    for (int i = 0; i < patientCount; i++) {
        delete patients[i];
    }
    delete[] patients;
}

Patient* HospitalChain::GetPatient(int id) {
    for (int i = 0; i < patientCount; i++) {
        if (patients[i]->getId() == id) {
            return patients[i];
        }
    }
    return nullptr;
}

int HospitalChain::getPatientCount() {
    return patientCount;
}

Patient* HospitalChain::AdmitPatient(int id, std::string name) {
    patients[patientCount] = new Patient(id, name);
    return patients[patientCount++];
}

void HospitalChain::DischargePatient(int id) {
    for (int i = 0; i < patientCount; i++) {
        if (patients[i]->getId() == id) {
            delete patients[i];
            for (int j = i; j < patientCount - 1; j++) {
                patients[j] = patients[j + 1];
            }
            patientCount--;
            break;
        }
    }
}
