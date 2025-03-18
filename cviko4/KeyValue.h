#pragma once
#include <iostream>

class KeyValue {
private:
    int key;
    double value;
public:
    KeyValue(int k, int v);
    int GetKey();
    double GetValue();
};

class KeyValues { 
private:
    KeyValue** keyValues;
    int count;
public:
    KeyValues (int n);
    ~KeyValues();
    KeyValue* CreateObject(int k, double v);
    KeyValue* SearchObject(int key);
    int Count ();
};