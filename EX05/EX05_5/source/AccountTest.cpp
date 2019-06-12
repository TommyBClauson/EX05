#include "Account.h"
#include "Date.h"
#include "Transaction.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    // creating the object account
    Account myAccount(0.015, 1000.0, 1122, "George");

    cout << "Account Owner: " << myAccount.GetName() << endl;
    cout << "Monthly Interest: " << myAccount.GetMonthlyInterestRate() << endl;
    cout << "Balance: " << myAccount.GetBalance() << endl << endl;

    // displaying account owners name, interst rate and balnce and tracstions (withdrawls and deposits)
    cout << "Account Summary: " << endl;

    // performing withdraws and deposits
    myAccount.Deposit(30.00);
    myAccount.Deposit(40.00);
    myAccount.Deposit(50.00);
    myAccount.Withdraw(5.00);
    myAccount.Withdraw(4.00);
    myAccount.Withdraw(2.00);
}