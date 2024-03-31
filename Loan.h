#include<bits/stdc++.h>
using namespace std;
#ifndef _LOAN_H
#define _LOAN_H
class Loan{
private:
    string Type;
    int Money = 0;
public:
    static int count;
    int Id = 0;
    int AccountId;
    int CustomerId;
    void changeMoney(int money);
    int getMoney();
    Loan(string type,int accountId,int customerId,int money);
    Loan();
};
#endif //_LOAN_H
