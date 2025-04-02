#pragma once
#include <iostream>
#include "client.h"
#include "bank.h"

class Account
{
private:
    int number;
    double balance;
    double interestRate;
    static double defaultInterestRate;
    static int objectCount;

    Client *owner;
    Client *partner;
public:
    Account(int n, Client *c);
    Account(int n, Client *c, Client *p);
    Account(int n, Client *c, double ir);
    Account(int n, Client *c, Client *p, double ir);

    int GetNumber(){ return number; }
    double GetBalance(){ return balance; }
    double GetInterestRate(){ return interestRate; }
    static double getDefaultInterestRate(){ return defaultInterestRate; }
    static int getObjectCount(){ return objectCount; }
    Client *GetOwner(){ return owner; }
    Client *GetPartner(){ return partner; }
    bool canWithdraw(double amount);
    static void setDefaultInterestRate(double newRate){ defaultInterestRate = newRate; }

    void Deposit(double amount);
    void Withdraw(double amount);
    void modifyInterestRate(double newRate);
    static void modifyDefaultInterestRate(double newRate);
    void AddInterest();
};