#include "bank.h"
using namespace std;

double Bank::defaultInterestRate = 1.01;

Bank::Bank(int numberOfClients, int numberOfAccounts) {
    clients = new Client*[numberOfClients];
    clientsCount = 0;

    accounts = new Account*[numberOfAccounts];
    accountsCount = 0;

}

Bank::~Bank() {
    for(int i = 0; i < clientsCount; i++) {
        delete clients[i];
    }
    delete[] clients;

    for(int i = 0; i < accountsCount; i++) {
        delete accounts[i];
    }
    delete[] accounts;
}

Client* Bank::GetClient(int code) {
    for(int i = 0; i < clientsCount; i++) {
        if(clients[i]->getCode() == code) {
            return clients[i];
        }
    }
    return nullptr;
}

Account* Bank::GetAccount(int number) {
    for(int i = 0; i < accountsCount; i++) {
        if(accounts[i]->GetNumber() == number) {
            return accounts[i];
        }
    }
    return nullptr;
}

Client *Bank::CreateClient(int code, string name) {
    clients[clientsCount] = new Client(code, name);
    return clients[clientsCount++];
}

Account *Bank::CreateAccount(int number, Client *owner) {
    accounts[accountsCount] = new Account(number, owner);
    return accounts[accountsCount++];
}

Account *Bank::CreateAccount(int number, Client *owner, Client *partner) {
    accounts[accountsCount] = new Account(number, owner, partner);
    return accounts[accountsCount++];
}

Account *Bank::CreateAccount(int number, Client *owner, double interestRate) {
    accounts[accountsCount] = new Account(number, owner, interestRate);
    return accounts[accountsCount++];
}

Account *Bank::CreateAccount(int number, Client *owner, Client *partner, double interestRate) {
    accounts[accountsCount] = new Account(number, owner, partner, interestRate);
    return accounts[accountsCount++];
}

void Bank::modifyInterestRate(double newRate) {
    for(int i = 0; i < accountsCount; i++) {
        if(accounts[i]->GetInterestRate() == defaultInterestRate) {
            accounts[i]->modifyInterestRate(newRate);
        }
    }
    defaultInterestRate = newRate;
}

void Bank::addInterest() {
    for(int i = 0; i < accountsCount; i++) {
        accounts[i]->AddInterest();
    }
}