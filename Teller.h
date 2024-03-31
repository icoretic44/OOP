#include "Account.h"
#include "Loan.h"
#include "Customer.h"
using namespace std;
#ifndef _TELLER_H
#define _TELLER_H
class Teller{
private:
    static int Id;
    string Name;
    vector<Customer> CustomerID;
public:
    Teller(string name);
    void AddCustomer(Customer customer);
    void CollectMoney(int customerId,int accountId,int money);
    void WithdrawMoney(int customerId,int accountId,int money);
    void OpenAccount(int customerId,int money);
    bool CloseAccount(int customerId,int accountId);
    bool LoanRequest(int customerId,int accountId,int LoanMoney,string type,int collateral);
    void ProvideInfo(int customerId);
};
#endif // _TELLER_H