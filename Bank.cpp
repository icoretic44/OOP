#include "Bank.h"
using namespace std;
Bank::Bank()
{
    BankId = 0;
    Name = "FLC";
    Location = "Ha Noi";
}
void Bank::printMenu()
{
    cout << "   1. General Inquiry \n";
    cout << "   2. Deposit Money \n";
    cout << "   3. Withdraw Money\n";
    cout << "   4. Open Account\n";
    cout << "   5. Close Account\n";
    cout << "   6. Apply Loan For Account\n";
    cout << "   0. Exit\n";
}
Customer Bank::newCustomer()
{
    string name,address,phone;
    cout<<"Please enter your name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Please enter your address: ";
    cin.ignore();
    getline(cin,address);
    cout<<"Please enter your phone number: ";
    cin.ignore();
    getline(cin,phone);
    Customer cus(name,address,phone);
    return cus;
}