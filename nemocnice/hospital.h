#pragma once
#include <iostream>
#include "patient.h"
#include "doctor.h"

class Hospital {
private:
    Patient **patients;
    int patientCount;

    Doctor **doctors;
    int doctorCount;

    static int defaultTreatmentLevel;
public:
    Hospital(int numberOfPatients, int numberOfDoctors);
    ~Hospital();

    Patient* GetPatient(int id);
    Doctor* GetDoctor(int id);

    static int getDefaultTreatmentLevel() { return defaultTreatmentLevel; }

    Patient *AdmitPatient(int id, std::string name);
    Doctor *HireDoctor(int id, std::string name);
    
    void upgradeTreatment(int level);
    void applyTreatment();
};
