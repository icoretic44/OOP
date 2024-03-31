#include<bits/stdc++.h>
#include "Customer.h"
#include "Account.h"
#include "Loan.h"
#include "Teller.h"
#include "Bank.h"
using namespace std;
int main()
{
    cout << "   Welcome \n";
    Bank b;
    cout << "   This is " << b.Name << " Bank\n";
    cout << "   Location in " << b.Location << "\n";
    cout << "   I'm Daisy - a teller for you today\n";
    Teller Daisy("Daisy");
    while(true)
    {
        cout << "   Are you a new customer or otherwise?\n";
        cout << "   Press 0 to exit\n";
        cout << "   If you are a new customer please press 1\n";
        cout << "   If you are already customer press anything exclude (0;1)\n";
        int num;
        cin >> num;
        if(num==0) return 0;
        if(num==1)
        {
            cout << "   Let me help you to be a new customer of bank\n";
            Customer cus = b.newCustomer();
            Daisy.AddCustomer(cus);
            cout << "   Great! Your customer account was created\n";
            cout << "   This is an information of you\n";
            Daisy.ProvideInfo(cus.Id);
        }
        cout << "   These are your serve banking, you can choose ones\n";
        while(true)
        {
            b.printMenu();
            int x;
            cin >> x;
            if(x==1)
            {
                cout << "   Give me a customer Id\n";
                int customerId;
                cin >> customerId;
                Daisy.ProvideInfo(customerId);
                continue;
            }
            if(x==2 || x==3)
            {
                if(x==2) cout << "   Give me a customerID, accountID and money do you want to add\n";
                if(x==3) cout << "   Give me a customerID, accountID and money do you want to withdraw\n";
                int customerID;
                int accountID;
                int money;
                cin >> customerID >> accountID >> money;
                if(x==2) Daisy.CollectMoney(customerID,accountID,money);
                if(x==3) Daisy.WithdrawMoney(customerID,accountID,money);
                continue;
            }
            if(x==4)
            {
                cout << "   Give me a customerID and money\n";
                int customerID;
                int money;
                cin >> customerID >> money;
                Daisy.OpenAccount(customerID,money);
                continue;
            }
            if(x==5)
            {
                cout << "   Give me a customerID and accountID \n";
                int customerID;
                int accountID;
                cin >> customerID >> accountID;
                Daisy.CloseAccount(customerID,accountID);
            }
            if(x==6)
            {
                cout << "   Give me a CustomerID,accountID,LoanMoney,Type and collateral\n";
                int accountID,customerID,LoanMoney,collateral;
                string type;
                cin >> customerID >> accountID >> LoanMoney >> type >> collateral;
                if(Daisy.LoanRequest(customerID,accountID,LoanMoney,type,collateral)==true)
                {
                    cout << "   Your Loan request are successed\n";
                }
                else cout << "   Your Loan request are not successed\n";
                continue;
            }
            if(x==0) break;
        }
    }
    return 0;
}