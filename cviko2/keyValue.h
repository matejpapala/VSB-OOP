#pragma once
#include <iostream>

class KeyValue {
private:
    int key;
    double value;
public:
    KeyValue(int key, double value);
    int getKey();
    double getValue();
    void sayHi();
};