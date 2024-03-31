#include "Teller.h"
int Teller::Id = 0;
Teller::Teller(string name)
{
    Id++;
    Name = name;
}
void Teller::AddCustomer(Customer customer)
{
    CustomerID.push_back(Customer());
    CustomerID.push_back(customer);
}
void Teller::CollectMoney(int customerId,int accountId,int money)
{
    CustomerID[customerId].DepositMoney(money,accountId);
}
void Teller::WithdrawMoney(int customerId,int accountId,int money)
{
    CustomerID[customerId].WithdrawMoney(money,accountId);
}
void Teller::OpenAccount(int customerId,int money)
{
    CustomerID[customerId].OpenAccount(money);
}
bool Teller::CloseAccount(int customerId,int accountId)
{
    return CustomerID[customerId].CloseAccount(accountId);
}
bool Teller::LoanRequest(int customerId,int accountId,int LoanMoney,string type,int collateral)
{
    return CustomerID[customerId].ApplyForLoan(type,accountId,LoanMoney,collateral);
}
void Teller::ProvideInfo(int customerID)
{
    CustomerID[customerID].GeneralInquiry();
}