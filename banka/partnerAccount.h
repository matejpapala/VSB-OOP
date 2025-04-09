#pragma once

#include <iostream>
#include <string>
#include "account.h"

class PartnerAccount : public Account {
private:
    Client *partner;
public:
    PartnerAccount(int n, Client *c, Client *p);
    PartnerAccount(int n, Client *c, Client *p, double ir);
    ~PartnerAccount();

    Client *GetPartner() { return partner; }
};