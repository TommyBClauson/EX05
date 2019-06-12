#ifndef DATE_H
#define DATE_H
#include <ctime>
#include <iostream>
using namespace std;

class Date
{
    private:
        // declaring vars
        int day, month, year;
    
    public:
        Date(); // no-arg constructor
        Date(int, int, int); // consturctor with specified time (day, month, year)
        int GetDay(); // returns day
        int GetMonth(); // returns month
        int GetYear(); // returns year
};
#endif