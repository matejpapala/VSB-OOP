#include "InvoiceItem.h"

InvoiceItem::InvoiceItem(std::string name, double price) {
    this->name = name;
    this->price = price;
}

std::string InvoiceItem::GetName() {
    return name;
}

double InvoiceItem::GetPrice() {
    return price;
}

void InvoiceItem::SetPrice(double price) {
    this->price = price;
}