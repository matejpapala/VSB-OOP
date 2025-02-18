#include <iostream>
using namespace std;

int main() {
    return 0;
}


class Person {
    private:
        string name;
        int age;
    public:
        Person(int age, string name);
        int getAge();
        string getName();
        void setAge(int age);
        void setName(string name);
};

Person::Person(int age, string name) {
    this->age = age;
    this->name = name;
}

int Person::getAge() {
    return age;
}

string Person::getName() {
    return name;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::setName(string name) {
    this->name = name;
}