#include "KeyValue.h"

KeyValue::KeyValue(int k, int v) {
    key = k;
    value = v;
}

int KeyValue::GetKey() {
    return key;
}

double KeyValue::GetValue() {
    return value;
}

KeyValues::KeyValues(int n) {
    keyValues = new KeyValue*[n];
    count = 0;
}

KeyValues::~KeyValues() {
    for (int i = 0; i < count; i++) {
        delete keyValues[i];
    }
    delete[] keyValues;
}

KeyValue* KeyValues::CreateObject(int k, double v) {
    KeyValue *newObject = new KeyValue(k, v);
    
    this->keyValues[count] = newObject;
    this->count++;

    return newObject;
}

KeyValue* KeyValues::SearchObject(int k) {
    for (int i = 0; i < this->count; i++){
        if (this->keyValues[i]->GetKey() == k) {
            return this->keyValues [i];
        }
    }
    return nullptr;
}

int KeyValues::Count() {
    return count;
}