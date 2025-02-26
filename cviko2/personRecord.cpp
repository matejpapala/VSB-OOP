#include "personRecord.h"
using namespace std;

PersonRecord::PersonRecord(string personName, string birthNumber) {
    this->name = personName;
    this->birthNumber = birthNumber;
}

string PersonRecord::getName() {
    return this->name;
}

string PersonRecord::getBirthDate() {
    string year = this->birthNumber.substr(0, 2);
    if(stoi(year) > 25) {
        year = "19" + year;
    }else {
        year = "20" + year;
    }
    string month = this->birthNumber.substr(2, 2);
    if(stoi(month) > 50) {
        month = to_string(stoi(month) - 50);
    }
    string day = this->birthNumber.substr(4, 2);

    return day + "." + month + "." + year;
}

Sex PersonRecord::getSex() {
    string month = this->birthNumber.substr(2, 2);
    if(stoi(month) > 50) {
        return female;
    }else {
        return male;
    }
}