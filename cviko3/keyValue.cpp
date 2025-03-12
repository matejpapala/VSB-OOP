#include "keyValue.h"

KeyValue::KeyValue(int key, double value) {
    this->key = key;
    this->value = value;
    this->next = nullptr;
}

KeyValue::~KeyValue() {
    if(this->next != nullptr) {
        delete this->next;
        this->next = nullptr;
    }
}

int KeyValue::getKey() {
    return key;
}

double KeyValue::getValue() {
    return value;
}

KeyValue *KeyValue::getNext() {
    return next;
}

KeyValue *KeyValue::CreateNext(int key, double value) {
    this->next = new KeyValue(key, value);
    return this->next;
}

KeyValue *KeyValue::CreateLoop(int key[], double value[], int counter) { //funguje
    KeyValue *kv = new KeyValue(key[0], value[0]);
    KeyValue *head = kv;
    for(int i = 0; i < counter; i++) {
        kv = kv->CreateNext(key[i], value[i]);
    }
    return head->getNext();
}

KeyValue* KeyValue::CreateRecursive(int key[], double value[], int counter, int index, KeyValue* head) { //funguje
    if (head == nullptr) {
        head = this;
    }
    if (index >= counter) {
        return head;
    } else {
        this->next = new KeyValue(key[index], value[index]);
        return this->next->CreateRecursive(key, value, counter, index + 1, head);
    }
}

void KeyValue::GrowLoop(int key[], double value[], int counter) { //funguje
    KeyValue *kv = this;
    for(int i = 0; i < counter; i++) {
        kv = kv->CreateNext(key[i], value[i]);
    }
}

void KeyValue::GrowRecursive(int key[], double value[], int counter, int index) { //funguje
    if (counter <= 0) {
        return;
    } 
    if (next == nullptr) {
        next = new KeyValue(key[index], value[index]);
        next->GrowRecursive(key, value, counter - 1, index + 1);
    }
}

KeyValue *KeyValue::GetTail() { //funguje
    KeyValue *kv = this;
    while(kv->getNext() != nullptr) {
        kv = kv->getNext();
    }
    return kv;
}

void KeyValue::PrintKeyValues() { //funguje
    KeyValue *kv = this;
    while(kv != nullptr) {
        std::cout << "Key: " << kv->getKey() << " Value: " << kv->getValue() << std::endl;
        kv = kv->getNext();
    }
}

void KeyValue::deleteAtPos(int pos) {
    if (pos <= 0 || next == nullptr) {
        return;
    }
    
    KeyValue *kv = this;
    for (int i = 0; i < pos - 1; i++) {
        kv = kv->getNext();
        if (kv == nullptr || kv->getNext() == nullptr) {
            return;
        }
    }
    KeyValue *temp = kv->getNext();
    kv->setNext(temp->getNext());
    temp->setNext(nullptr);
    delete temp;
}

void KeyValue::setNext(KeyValue *next) { //funguje
    this->next = next;
}