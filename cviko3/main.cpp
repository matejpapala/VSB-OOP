#include <iostream>
#include "keyValue.h"
using namespace std;

int arrKeys[] = {1, 2, 3, 4, 5, 6};
double arrValues[] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5};

int main() {

    // KeyValue *kv3 = new KeyValue (1, 1.5);
    // cout << kv3->CreateNext(2, 2.5)->getKey() << endl;
    // KeyValue *kv4 = kv3->getNext();
    // cout << kv4->getNext() << endl;
    // delete kv3;
    // //delete kv4;
    // cout << kv3->getKey() << endl;
    // cout << kv4->getKey() << endl;


    KeyValue *kv1 = new KeyValue(1, 1.5);
    kv1->CreateNext(2, 2.5);

    //kv1->PrintKeyValues();
    KeyValue *kv2 = new KeyValue(arrKeys[0], arrValues[0]);
    //kv2 = kv2->CreateLoop(arrKeys, arrValues, 3);
    //kv2 = kv2->CreateRecursive(arrKeys, arrValues, 3, 1);
    // kv2->GrowLoop(arrKeys, arrValues, 5);
    kv2->GrowRecursive(arrKeys, arrValues, 5, 1);
    //KeyValue *kvtail = kv2->GetTail();
    //cout << "Tail: " << kvtail->getKey() << " " << kvtail->getValue() << endl;
    kv2->deleteAtPos(2);
    kv2->PrintKeyValues();
}