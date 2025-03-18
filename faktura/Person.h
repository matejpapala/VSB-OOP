#pragma once
#include <iostream>

class Person {
private:
    std::string name;
    std::string address;
public:
    Person();
    Person(std::string name, std::string address);
    std::string GetName();
    std::string GetAddress();
};