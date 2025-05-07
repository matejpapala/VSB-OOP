#pragma once

#include <iostream>

class AbstractAccount {
public:

    inline AbstractAccount() {
        std::cout << "\nAbstractAccount constructor called" << std::endl;
    }
    
    inline virtual ~AbstractAccount() {
        std::cout << "AbstractAccount destructor called\n" << std::endl;
    }

    virtual bool canWithdraw(double amount) = 0;
};
