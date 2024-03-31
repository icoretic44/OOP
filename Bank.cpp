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
    cout << "   Please give me some informations\n";
    cout << "   What's your name ?\n";
    cout << "   Where do you live in current ?\n";
    cout << "   What's your phone number ?\n";
    cout << "   Answer respectively\n";
    string name,address,phone;
    cin >> name >> address >> phone;
    Customer cus(name,address,phone);
    return cus;
}