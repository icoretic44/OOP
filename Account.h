#include<bits/stdc++.h>
using namespace std;
#ifndef _ACCOUNT_H
#define _ACCOUNT_H
class Account{
private:
    int Money = 0;
public:
    static int count;
    int Id;
    int CustomerId;
    Account(int customerId,int money);
    Account();
    int getMoney();
    void changeMoney(int money);
};
#endif //_ACCOUNT_H