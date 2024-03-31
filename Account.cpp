#include "Account.h"
using namespace std;
int Account::count = 0;
void Account::changeMoney(int money)
{
    Money += money;
}
Account::Account(int customerId,int money)
{
    CustomerId = customerId;
    Id = ++count;
    Money += money;
}
Account::Account()
{
    CustomerId = 0;
    Id = 0;
    Money = 0;
}
int Account::getMoney()
{
    return Money;
}