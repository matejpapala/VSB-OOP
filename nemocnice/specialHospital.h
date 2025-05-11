#pragma once
#include <iostream>
#include "hospital.h"  
#include <string>

class SpecialHospital : public Hospital
{
private:
    int specialID;          
    std::string specialDept;

public:
    SpecialHospital(int numberOfPatients, int numberOfDoctors, int id, const std::string& dept) : Hospital(numberOfPatients, numberOfDoctors), specialID(id), specialDept(dept)
    {
        std::cout << "SpecialHospital constructor was called" << std::endl;
    }

    ~SpecialHospital()
    {
        std::cout << "SpecialHospital destructor was called" << std::endl;
    }

    
    void printSpecialInfo() const
    {
        std::cout << "SpecialHospital Info: ID = " << specialID << ", Department = " << specialDept << std::endl;
    }

    void manage() override 
    {
        std::cout << "Special hospital managing " << getPatientCount() << " patients." << std::endl;
        applyTreatment();
    }
};
