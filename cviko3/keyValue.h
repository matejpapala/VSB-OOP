#pragma once
#include <iostream>

class KeyValue {
private:
    int key;
    double value;
    KeyValue *next;
public:
    KeyValue(int key, double value);
    ~KeyValue();
    int getKey();
    double getValue();
    KeyValue *getNext();
    void setNext(KeyValue *next);
    KeyValue *CreateNext(int key, double value);
    KeyValue *CreateLoop(int key[], double value[], int counter);
    KeyValue *CreateRecursive(int key[], double value[], int counter, int index, KeyValue* head = nullptr);
    void GrowLoop(int key[], double value[], int counter);
    void GrowRecursive(int key[], double value[], int counter, int index);
    KeyValue *GetTail();
    void PrintKeyValues();
    void deleteAtPos(int key); //jeste neni hotovo
};