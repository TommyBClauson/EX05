#ifndef TRANSACTION_H
#define TRANSACTION_H
#include "Date.h"
#include <string>
#include <iostream>
using namespace std;

class Transaction
{
    private:
        // declaring vars
        Date dateTransaction;
        char type;
        double amount;
        double balance;
        string description;

    public:
        // no arg constructor
        // constructor with specifi date type balance and infomation
        Transaction(Date, char, double, string);
        void print();

};
#endif