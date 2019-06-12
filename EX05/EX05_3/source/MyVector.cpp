#include "MyVector.h"
#include <vector>
#include <iostream>
using namespace std;

MyVector::MyVector()
{
    vectsize = 0;
}

void MyVector::push_back(T input)
{
    elements[size++] = input;
}

void MyVector::pop_back(T input)
{
    elements[--size] = input;
}


unsigned int MyVector::size() const
{
    return size;
}

int MyVector::at(int index) const
{
    return elements[index];
}

bool MyVector::empty() const
{
    if (size == 0)
    {
        return true;
    }
    else
        return false;
}

void MyVector::clear()
{
    size = 0;
}

void MyVector::swap(MyVector vect2)
{
    t temp[100];
    int tempSize =vect2.size();

    // loop runs until filled, copying
    for (int i = 0; i < vect2.size(); i++)
    {
        temp[i] = vect2.at(i);
    }
    
    vect2.clear();

    // loop runs until filled
    for (int i = 0; i < size(); i++)
    {
        vect2.push_back(at(i));
    }
    
    clear();

    //loop until 
    for (int i = 0; i < tempSize; i++)
    {
        push_back(temp[i]);
    }
}