#include <iostream>
#include "Invoice.h"
using namespace std;

void demoInvoice() {
    
    Person* person = new Person("John Doe", "123 Main St");
    Invoice* invoice = new Invoice(1, person);
    InvoiceItem* item = new InvoiceItem("Milk", 15.5);
    InvoiceItem* item2 = new InvoiceItem("Bread", 40.0);
    invoice->AddItem(item);
    invoice->AddItem(item2);
    invoice->Print();
    invoice->DeleteItem("Milk");
    invoice->Print();
    invoice->EditItem("Bread", 20.0);
    invoice->Print();
    delete invoice;
    delete person;
}

int main() {
    demoInvoice();
    return 0;
}