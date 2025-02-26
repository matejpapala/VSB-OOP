#include "keyValue.h"
#include "wallet.h"
#include "personRecord.h"
using namespace std;

void demoKeyValue() {
    KeyValue val(1, 5.6);
    cout << "Value: " << val.getValue() << endl;
    KeyValue *val2 = new KeyValue(2, 10.7);
    cout << "Value: " << val2->getValue() << endl;
}

void demoWallet() {
    Wallet* myWallet = new Wallet(100);
    myWallet->deposit(50);
    myWallet->getBalance();
    myWallet->withdraw(25);
    myWallet->withdraw(150);
    myWallet->getBalance();
}

void demoPerson() {
    PersonRecord* person = new PersonRecord("John", "050207/1234");
    cout << "Name: " << person->getName() << endl;
    cout << "Birth date: " << person->getBirthDate() << endl;
    string result = (person->getSex()) ? "Male" : "Female";
    cout << "Sex: " << result << endl;
}

int main() {
    // demoKeyValue();
    // demoWallet();
    demoPerson();
    return 0;
}