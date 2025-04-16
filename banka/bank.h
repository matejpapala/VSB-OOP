#pragma once
#include <iostream>
#include "partnerAccount.h"
#include "creditAccount.h"

class Account;
class PartnerAccount;
class Client;


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
    PartnerAccount *CreateAccount(int number, Client *owner, Client *partner);
    Account *CreateAccount(int number, Client *owner, double interestRate);
    PartnerAccount *CreateAccount(int number, Client *owner, Client *partner, double interestRate);

    void modifyInterestRate(double newRate);
    void addInterest();
};