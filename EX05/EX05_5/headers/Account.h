#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Date.h"
#include "Transaction.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Account 
{
    private:
        int id;
        double balance, annualInterestRate;
        Date dateCreated;
        string name;
        vector <Transaction> transactions;
    
    public:
        Account(); // no-arg constructor
        Account(int, double); // constructor with specified id and starting balance
        Account(int, double, double);
        Account(string, int, double);
        Account(double, double, int, string);
        int GetId();
        string GetName();
        double GetBalance();
        double GetAnnualInterestRate();
        double GetMonthlyInterestRate();
        double Withdraw(double);
        double Deposit(double);
        void SetId(int);
        void SetName(string);
        void SetBalance(double);
        void SetAnnualInterestRate(double);
        void SetDateCreated(Date);

};
#endif