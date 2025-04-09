#include "partnerAccount.h"
#include "bank.h"
using namespace std;

PartnerAccount::PartnerAccount(int n, Client *c, Client *p) : Account(n, c) {
    this->partner = p;
    cout << "PartnerAccount constructor called" << endl;
}

PartnerAccount::PartnerAccount(int n, Client *c, Client *p, double ir) : Account(n, c, ir) {
    this->partner = p;
    cout << "PartnerAccount constructor called" << endl;
}

PartnerAccount::~PartnerAccount() {
    cout << "PartnerAccount destructor called" << endl;
}