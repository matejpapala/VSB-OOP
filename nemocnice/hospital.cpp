#include "hospital.h"
#include <iostream>
#include <string>

using namespace std;

int Hospital::defaultTreatmentLevel = 1;

Hospital::Hospital(int numberOfPatients, int numberOfDoctors)
    : HospitalChain(numberOfPatients)
{
    cout << "Hospital constructor was called" << endl;
    doctors = new Doctor*[numberOfDoctors];
    doctorCount = 0;
}

Hospital::~Hospital() {
    cout << "Hospital destructor was called" << endl;
    for (int i = 0; i < doctorCount; i++) {
        delete doctors[i];
    }
    delete[] doctors;
}

Patient* Hospital::GetPatient(int id) {
    for (int i = 0; i < patientCount; i++) {
        if (patients[i]->getId() == id) {
            return patients[i];
        }
    }
    return nullptr;
}

Doctor* Hospital::GetDoctor(int id) {
    for (int i = 0; i < doctorCount; i++) {
        if (doctors[i]->getId() == id) {
            return doctors[i];
        }
    }
    return nullptr;
}

Patient* Hospital::AdmitPatient(int id, string name) {
    patients[patientCount] = new Patient(id, name);
    return patients[patientCount++];
}

Doctor* Hospital::HireDoctor(int id, string name) {
    doctors[doctorCount] = new Doctor(id, name);
    return doctors[doctorCount++];
}

void Hospital::upgradeTreatment(int level) {
    for (int i = 0; i < patientCount; i++) {
        patients[i]->improveTreatment(level);
    }
    defaultTreatmentLevel += level;
}

void Hospital::applyTreatment() {
    for (int i = 0; i < doctorCount; i++) {
        doctors[i]->treatPatient();
    }
}
