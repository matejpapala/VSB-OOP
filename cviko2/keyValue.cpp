#include "keyValue.h"

KeyValue::KeyValue(int key, double value) {
    this->key = key;
    this->value = value;
}

int KeyValue::getKey() {
    return key;
}

double KeyValue::getValue() {
    return value;
}

void KeyValue::sayHi(){
    std::cout << "Hi! " << std::endl;
}