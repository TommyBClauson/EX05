#include "Date.h"
#include "Transaction.h"
#include <iostream>
#include <string>
using namespace std;

Transaction::Transaction(Date newDateTransaction, char newType, double newBalance, string newDescription)
{
    dateTransaction = newDateTransaction;
    type = newType;
    balance = newBalance;
    description = newDescription;
    print();
}

void Transaction::print()
{
    //cout << dateTransaction.GetDay() << "-" << dateTransaction.GetMonth() << "-";
    //cout << dateTransaction.GetYear() << balance << type << description << endl;

    cout << dateTransaction.GetYear() << "-" << dateTransaction.GetMonth() << "-";
    cout << dateTransaction.GetDay() << "  " << balance << "  " << type << "  " << description << endl;
}