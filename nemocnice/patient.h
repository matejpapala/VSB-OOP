#pragma once
#include <iostream>

class Patient {
private:
    int id;
    std::string name;
    int treatmentLevel;
public:
    Patient(int id, std::string name) {
        this->id = id;
        this->name = name;
        this->treatmentLevel = 1;
    }
    int getId() { return id; }
    std::string getName() { return name; }
    int getTreatmentLevel() { return treatmentLevel; }
    void improveTreatment(int level) { treatmentLevel += level; }
};
