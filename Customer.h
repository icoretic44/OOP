#include<bits/stdc++.h>
#include "Account.h"
#include "Loan.h"
using namespace std;
#ifndef _CUSTOMER_H
#define _CUSTOMER_H
class Customer{
public:
    static int Id;
    string Name;
    string Address;
    string PhoneNo;
    vector<Account> AccountID;
    int CheckIndexAccountID[1000];
    vector<Loan> LoanID; 
    void ChangeAccountID(int accountId);
    void GeneralInquiry();
    void DepositMoney(int money,int accountId);
    void WithdrawMoney(int money,int accountId);
    void OpenAccount(int money);
    bool CloseAccount(int accountId);
    bool ApplyForLoan(string type,int accountId,int money,int collateral);
    Customer(string name,string address,string phoneNo);
    Customer();
};
#endif //_CUSTOMER_H