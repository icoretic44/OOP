#include <bits/stdc++.h>
#include "Customer.h"
#include "Teller.h"
using namespace std;
#ifndef _BANK_H
#define _BANK_H
class Bank{
public:
    int BankId;
    string Name;
    string Location;
    Bank();
    void printMenu();
    Customer newCustomer();
};
#endif //_BANKING_H
