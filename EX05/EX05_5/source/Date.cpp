#include "Date.h"
#include <ctime>
#include <iostream>
using namespace std;

// no-arg constructor
Date::Date()
{
    //setting date
    //setDate(time(0));
}

// constructing obect with specified transcation date (day, month, year)
Date::Date(int D, int M, int Y)
{
    day = D;
    month = M;
    year = Y;
}

// Get funcs for day month and year of transcation
int Date::GetDay()
{
    return day;
}

int Date::GetMonth()
{
    return month;
}

int Date::GetYear()
{
    return year;
}

