#pragma once
#include "patient.h"

class HospitalChain
{
private:
    Patient **patients;
    int patientCount;
public:
    HospitalChain(int numberOfPatients);
    ~HospitalChain();

    Patient* GetPatient(int id);
    int getPatientCount() { return patientCount; }

    Patient *AdmitPatient(int id, std::string name);
    void DischargePatient(int id);
};