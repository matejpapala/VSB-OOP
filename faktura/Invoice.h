#pragma once
#include <iostream>
#include "InvoiceItem.h"
#include "Person.h"

class Invoice
{
private:
    int id;
    Person* customer;
    InvoiceItem** items;
public:
    Invoice(int id, Person* customer);
    ~Invoice();
    void AddItem(InvoiceItem* item);
    void DeleteItem(std::string name);
    void EditItem(std::string name, double price);
    double GetTotal();
    void Print();
};

