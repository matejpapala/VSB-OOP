#pragma once
#include <iostream>

class Client {
private:
    int code;
    std::string name;
public:
static int ObjectCount;
    Client() {
        code = -1;
        name = "default";
        Client::ObjectCount++;
    }
    Client(int code, std::string name) {
        this->code = code;
        this->name = name;
        Client::ObjectCount += 1;
    }
    ~Client() {
        Client::ObjectCount--;
    }
    static int getObjectCount() { return ObjectCount; }
    int getCode() { return code; }
    std::string getName() { return name; }
};