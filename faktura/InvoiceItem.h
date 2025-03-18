#pragma once
#include <iostream>

class InvoiceItem {
private:
    std::string name;
    double price;
public:
    InvoiceItem(std::string name, double price);
    std::string GetName();
    double GetPrice();
    void SetPrice(double price);
};