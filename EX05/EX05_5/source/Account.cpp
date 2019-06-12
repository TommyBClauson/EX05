#include "Account.h"
#include "Date.h"
#include "Transaction.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

Account::Account() // no-arg constructor
{
    // setting vars to be zero as default
    id = 0;
    balance = 0.0;
    annualInterestRate = 0.0;
}



Account::Account(string newName, int newId, double newBalance)
{
    name = newName;
    id = newId;
    balance = newBalance;
}

Account::Account(double newAnnualInterestRate, double newBalance, int newId, string newName)
{
    annualInterestRate = newAnnualInterestRate;
    balance = newBalance;
    id = newId;
    name = newName;
}

int Account::GetId()
{
    return id;
}

string Account::GetName()
{
    return name;
}
double Account::GetBalance()
{
    return balance;
}

double Account::GetAnnualInterestRate()
{
    return annualInterestRate;
}

double Account::GetMonthlyInterestRate()
{
    return Account::annualInterestRate / 12;
}

double Account::Withdraw(double amount)
{
    balance -= amount;
    Date dateCreated(2019, 11, 06);
    Transaction newTrans(dateCreated, 'W', balance, "Withdrawl Made");
    transactions.push_back(newTrans);

        return balance;
}

double Account::Deposit(double amount)
{
    balance += amount;
    Date dateCreated(2019, 11, 06);
    Transaction newTrans(dateCreated, 'D', balance, "Deposit Made");
    transactions.push_back(newTrans);

        return balance;
}

void Account::SetId(int newId)
{
    id = newId;
}

void Account::SetName(string newName)
{
    name = newName;
}
void Account::SetBalance(double newBalance)
{
    balance = newBalance;
}

void Account::SetAnnualInterestRate(double newAnnualInterestRate)
{
    annualInterestRate = newAnnualInterestRate;
}

void Account::SetDateCreated(Date newDateCreated)
{
    dateCreated = newDateCreated;
}