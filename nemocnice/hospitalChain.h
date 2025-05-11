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
    virtual ~HospitalChain() = 0;

    virtual Patient* GetPatient(int id);
    int getPatientCount();

    virtual void manage() = 0;
    Patient* AdmitPatient(int id, std::string name);
    void DischargePatient(int id);
};
