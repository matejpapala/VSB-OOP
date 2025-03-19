#pragma once
#include <iostream>

class Client {
private:
    int code;
    std::string name;
public:
    Client() {
        code = -1;
        name = "default";
    }
    Client(int code, std::string name) {
        this->code = code;
        this->name = name;
    }
    int getCode() { return code; }
    std::string getName() { return name; }
};