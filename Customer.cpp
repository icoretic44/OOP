#include "Customer.h"
#include<bits/stdc++.h>
using namespace std;
/*int Customer::getID()
{
    return Id;
}*/
int Customer::Id = 0;
Customer::Customer(string name,string address,string phoneNo)
{
    Id++;
    Name = name;
    Address = address;
    PhoneNo = phoneNo;
    AccountID.push_back(Account());
    LoanID.push_back(Loan());
}
Customer::Customer()
{
    Name = "thaihoa";
    Address = "o dou con low moi noi";
    PhoneNo = "4444";
    AccountID.push_back(Account());
    LoanID.push_back(Loan());
}
void Customer::GeneralInquiry()
{
    cout << "   This is your CustomerID " << Id << "\n";
    cout << "   This is your Name " << Name << "\n";
    cout << "   This is your Address " << Address << "\n";
    cout << "   This is your PhoneNumber " << PhoneNo << "\n";
    for(auto x:AccountID)
    {
        if(x.Id == 0) continue;
        cout << "   Account ID " << x.Id << "\n";
        cout << "   Money in this account ID is " << x.getMoney() << "\n";
    }
    for(auto x:LoanID)
    {
        if(x.Id == 0) continue;
        cout << "   Loan ID " << x.Id << "\n";
        cout << "   Loan Money you had " << x.getMoney() << "\n";
    }
}
void Customer::ChangeAccountID(int accountId)
{
    for(int i=accountId;i<=(int)AccountID.size();++i)
    {
        CheckIndexAccountID[i] = 0;
    }
}
void Customer::DepositMoney(int money,int accountId)
{
    if(CheckIndexAccountID[accountId]==0)
    {
        cout << "   This account has not existed\n";
        return;
    }
    AccountID[accountId].changeMoney(money);
}
void Customer::WithdrawMoney(int money,int accountId)
{//
    if(CheckIndexAccountID[accountId]==0)
    {
        cout << "   This account has not existed\n";
        return;
    }
    if(AccountID[accountId].getMoney() < money)
    {
        cout << "   You don't have enough money\n";
        return;
    }
    AccountID[accountId].changeMoney(-money);
}
void Customer::OpenAccount(int money)
{
    AccountID.push_back(Account(Id,money));
    CheckIndexAccountID[(int)AccountID.size()]++;
}
bool Customer::CloseAccount(int accountId)
{
    if(accountId >= int(AccountID.size())) return false;
    AccountID.erase(AccountID.begin()+accountId);
    ChangeAccountID(accountId);
    return true;
}
bool Customer::ApplyForLoan(string type,int accountId,int money,int collateral)
{
    if((type=="Mortgage" && collateral >= money) || type=="Trust")
    {
        LoanID.push_back(Loan(type,accountId,Id,money));
        return true;
    }
    return false;
}


