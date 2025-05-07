#pragma once
#include <iostream>
#include "client.h"
#include "abstractAccount.h"

class Account : public AbstractAccount
{
private:
    int number;
    
    double interestRate;
    static double defaultInterestRate;
    static int objectCount;

    Client *owner;
    Client *partner;
protected:
    double balance;
public:
    Account(int n, Client *c);
    Account(int n, Client *c, double ir);
    virtual ~Account();

    int GetNumber(){ return number; }
    double GetBalance(){ return balance; }
    double GetInterestRate(){ return interestRate; }
    static double getDefaultInterestRate(){ return defaultInterestRate; }
    static int getObjectCount(){ return objectCount; }
    Client *GetOwner(){ return owner; }
    Client *GetPartner(){ return partner; }
    static void setDefaultInterestRate(double newRate){ defaultInterestRate = newRate; }

    void Deposit(double amount);
    virtual bool canWithdraw(double amount);
    bool Withdraw(double amount);
    void modifyInterestRate(double newRate);
    static void modifyDefaultInterestRate(double newRate);
    void AddInterest();
};