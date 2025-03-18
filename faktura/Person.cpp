#include "Person.h"


Person::Person() {
    name = "default-name";
    address = "default-address";
}

Person::Person(std::string name, std::string address) {
    this->name = name;
    this->address = address;
}

std::string Person::GetName() {
    return name;
}

std::string Person::GetAddress() {
    return address;
}