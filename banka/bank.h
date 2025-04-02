#pragma once
#include <iostream>
#include "account.h"

class Bank {
private:
    Client **clients;
    int clientsCount;

    Account **accounts;
    int accountsCount;

    static int ObjectCount;
public:
    Bank(int numberOfClients, int numberOfAccounts);
    ~Bank();

    Client* GetClient(int code);
    Account* GetAccount(int number);
    static int getObjectCount() { return ObjectCount; }

    Client *CreateClient(int code, std::string name);
    Account *CreateAccount(int number, Client *owner);
    Account *CreateAccount(int number, Client *owner, Client *partner);
    Account *CreateAccount(int number, Client *owner, double interestRate);
    Account *CreateAccount(int number, Client *owner, Client *partner, double interestRate);

    void modifyInterestRate(double newRate);
    void addInterest();
};