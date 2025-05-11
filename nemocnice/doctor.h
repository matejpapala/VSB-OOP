#pragma once
#include <iostream>

class Doctor {
private:
    int id;
    std::string name;
public:
    Doctor(int id, std::string name) {
        this->id = id;
        this->name = name;
    }
    int getId() { return id; }
    std::string getName() { return name; }
    void treatPatient() { std::cout << "Doctor " << name << " is treating a patient." << std::endl; }
    void treatPatient(int times) { std::cout << "Doctor " << name << " is treating a patient " << times << " times." << std::endl; }
};
