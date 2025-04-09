#include "bank.h"
using namespace std;

void demoBank() {
    Bank bank(10, 10);
    Client *c1 = bank.CreateClient(1, "Matej");
    Client *c2 = bank.CreateClient(2, "Bob");
    Client *c3 = bank.CreateClient(3, "Pepa");

    Account *a1 = bank.CreateAccount(101, c1);
    Account *a2 = bank.CreateAccount(102, c2, c3);
    Account *a3 = bank.CreateAccount(103, c3, 1.05);

    a1->Deposit(1000);
    a2->Deposit(2000);
    a3->Deposit(3000);

    a1->Withdraw(100);
    a2->Withdraw(200);
    a3->Withdraw(300);

    bank.addInterest();

    cout << "Account " << a1->GetNumber() << " balance: " << a1->GetBalance() << endl;
    cout << "Account " << a2->GetNumber() << " balance: " << a2->GetBalance() << endl;
    cout << "Account " << a3->GetNumber() << " balance: " << a3->GetBalance() << endl;

    bank.modifyInterestRate(1.03);

    cout << "Interest rate for special acc: " << a3->GetInterestRate() << endl;
    cout << "Interest rate for normal acc: " << a1->GetInterestRate() << endl;

    cout << "Number of clients: " << Client::getObjectCount() << endl;
    cout << "Number of accounts: " << Account::getObjectCount() << endl;
    cout << "Number of banks: " << Bank::getObjectCount() << endl;

}

void demoInheritance() {
    Account *a;
    PartnerAccount *pa;
    pa = new PartnerAccount(0, new Client(1, "Matej"), new Client(2, "Bob"));
    a = pa;

    cout << a->GetOwner()->getName() << endl;
    //cout << a->GetPartner()->getName() << endl;

    cout << pa->GetPartner()->getName() << endl;
}


void demoInheritanceBank() {
    Account *a;
    PartnerAccount *pa;

    Bank *b = new Bank(100, 1000);
    Client *o = b->CreateClient(1, "Matej");
    Client *p = b->CreateClient(2, "Bob");
    a = b->CreateAccount(0, o);
    pa = b->CreateAccount(0, o, p);

    cout << a->GetOwner()->getName() << endl;
    cout << pa->GetPartner()->getName() << endl;

    cout << b->GetClient(1)->getName() << endl;
}

int main() {
    //demoBank();
    // demoInheritance();
    demoInheritanceBank();
    return 0;
}