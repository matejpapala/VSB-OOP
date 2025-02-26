#pragma once
#include <iostream>
#include <string>

enum Sex 
{
    male = 0,
    female = 1
};

class PersonRecord {
private:
    std::string name;
    std::string birthNumber;

public:
    PersonRecord(std::string personName, std::string birthNumber);
    std::string getName();
    std::string getBirthDate();
    Sex getSex();
};