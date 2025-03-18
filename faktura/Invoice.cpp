#include "Invoice.h"
using namespace std;

Invoice::Invoice(int id, Person* customer) {
    this->id = id;
    this->customer = customer;
    this->items = new InvoiceItem*[10];
}

Invoice::~Invoice() {
    for (int i = 0; i < 10; i++) {
        delete items[i];
    }
    delete[] items;
}

void Invoice::AddItem(InvoiceItem* item) {
    for (int i = 0; i < 10; i++) {
        if (items[i] == nullptr) {
            items[i] = item;
            break;
        }
    }
}

void Invoice::DeleteItem(string name) {
    for (int i = 0; i < 10; i++) {
        if (items[i] != nullptr && items[i]->GetName() == name) {
            delete items[i];
            items[i] = nullptr;
            break;
        }
    }
}

void Invoice::EditItem(string name, double price) {
    for(int i = 0; i < 10;i++) {
        if(items[i] != nullptr && items[i]->GetName() == name) {
            items[i]->SetPrice(price);
            break;
        }
    }
}

double Invoice::GetTotal() {
    double total = 0;
    for (int i = 0; i < 10; i++) {
        if (items[i] != nullptr) {
            total += items[i]->GetPrice();
        }
    }
    return total;
}

void Invoice::Print() {
    cout << "Invoice ID: " << id << endl;
    cout << "Customer: " << customer->GetName() << endl;
    cout << "Items:" << endl;
    for (int i = 0; i < 10; i++) {
        if (items[i] != nullptr) {
            cout << items[i]->GetName() << " - " << items[i]->GetPrice() << endl;
        }
    }
    cout << "Total: " << GetTotal() << endl;
    cout << endl << endl;
}