#include "Loan.h"
using namespace std;
int Loan::count = 0;
void Loan::changeMoney(int money)
{
    Money += money;
}
Loan::Loan(string type,int accountId,int customerId,int money)
{
    Type = type;
    AccountId = accountId;
    CustomerId = customerId;
    Id = ++count;
    Money += money;
}
Loan::Loan()
{
    Type = "thaihoa";
    AccountId = 0;
    CustomerId = 0;
    Id = 0;
    Money = 0;
}
int Loan::getMoney()
{
    return Money;
}