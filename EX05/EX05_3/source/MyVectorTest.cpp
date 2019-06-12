#include "MyVector.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    // creating object MyVector "vect1"
    MyVector vect1;

    // calling back to func emptyto check
    if(vect1.empty())
        cout << "The vector 1 is empty" << endl;

        // caling back to the push_back func to add to vector 1
        cout << "Adding values to vector 1" << endl;
        vect1.push_back(3);
        vect1.push_back(1);
        vect1.push_back(2);
        vect1.push_back(8);
        vect1.push_back(4);
        vect1.push_back(6);

        // loop for displaying above elements
        for (int i = 0; i < vect1.size(); i++)
        {
            cout << vect1.at(i) << " ";
        }
        cout << endl;

        // displaying the size of the vector 1 by calling back to func size
        cout << "the size of the vector 1 is: " << vect1.size() << endl;

        // calling back to pop_back func to remove last element of vect1
        vect1.pop_back();
        cout << "after removing the last elment of vector 1 " << endl;
        cout << "the size of the vector 1 is: " << vect1.size() << endl;
    
    // creating object MyVector "vect2"
    MyVector vect2;

    // caling back to the push_back func to add to vector 2
    cout << "Adding values to vector 2" << endl;
    vect2.push_back(0);
    vect2.push_back(1);
    vect2.push_back(6);
    vect2.push_back(2);

    // loop for displaying above elements
    for (int i = 0; i < vect2.size(); i++)
    {
        cout << vect2.at(i) << " ";
    }
        cout << endl;
    
    // displaying the size of the vector 2 by calling back to func size
    cout << "the size of the vector 2 is: " << vect2.size() << endl;

    // Swapping vect1 for vect2 elements
    cout << "Swapping elements from vector 2 to vector 1" << endl;
    vect1.swap(vect2);
    cout << "after swapping elements, vector 1 elements are: ";
    
    // loop to run until all elemnts of vector 1 are displayed
    for (int i = 0; i < vect1.size(); i++)
    {
        cout << vect1.at(i) << " ";
    }
    cout << endl;

    // calling back to clear func to clear the vector
    cout << "Clearing the elements in vector 1" << endl;
    vect1.clear();
    // calling back to the size func to check if cleared
    cout << "the size of the vector after clear is: " << vect1.size() << endl;

    return 0;
}