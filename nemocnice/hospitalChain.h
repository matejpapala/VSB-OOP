#pragma once
#include "patient.h"
#include <string>

class HospitalChain
{
protected:
    Patient **patients;
    int patientCount;
public:
    HospitalChain(int numberOfPatients);
    ~HospitalChain();

    Patient* GetPatient(int id);
    int getPatientCount();

    Patient* AdmitPatient(int id, std::string name);
    void DischargePatient(int id);
};
