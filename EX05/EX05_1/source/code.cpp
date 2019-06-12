#include <iostream>
#include <string>
#include <array>

using namespace std;

template <typename T>

void Linear_Search(T *j, T key, int aSize)
{
    int temp = 0;

    // loop for running condition
    for (int i = 0; i < aSize; i++)
    {
        if (j[i] == key)
        {
            temp = 1;
            cout << "\n item found at position: " << i << endl;
        }
        else if (temp != 1)
        {
            temp = 0;
        }
    }
    
    if(temp == 0)
    {
        cout << "\n No item not found\n\n";
    }
}

int main()
{
    // delcaring vars
    int search1;
    double search2;
    string search3;
    
    // delcaring and initializing arrays
    int intArray[10] = {100, 15, 85, 310, 45, 250, 99, 69, 710, 73};
    double dubArray[10] = {1.1, 25.6, 85.1, 45.6, 78.45, 1.12, 78.9, 68.2, 25.9, 84.2};
    string strArray[10] = {"tom", "bob", "mom", "cat", "dog", "hat", "out", "dad", "hop", "top"};

    // linear search for integer arrau
    cout << "\n Elements of the integer array \n";
    // loop runing to display the elements of the array
    for (int i = 0; i < 10; i++)
    {
        cout << " " << intArray[i]; // using the intarray
    }

    // asking user for a integer
    cout << "\n Please enter a item (integer) to find postion in array : ";
    cin >> search1; // storing users input to search1

    // calling back to function to do linear search
    // invoking func
    cout << "\n Linear Search" << endl;
    Linear_Search(intArray, search1, 10); // array "int", using search "users item", the sizing of array being 10
                                         // finding the postion of the item in the aray, giving its index 0-9

    // linear search for double array
    cout << "\n\n Elements of the doube array \n";
    // loop runing to display the elements of the array
    for (int i = 0; i < 10; i++)
    {
        cout << " " << dubArray[i]; // using the intarray
    }

    // asking user for a double item
    cout << "\n Please enter a item (decimal) to find postion in array: ";
    cin >> search2; // storing users input to search2

    // calling back to function to do linear search
    // invoking func
    cout << "\n Linear Search" << endl;
    Linear_Search(dubArray, search2, 10); // array "double", using search "users item", the sizing of array being 10
                                         // finding the postion of the item in the aray, giving its index 0-9

    // linear search for double array
    cout << "\n\n Elements of the doube array \n";
    // loop runing to display the elements of the array
    for (int i = 0; i < 10; i++)
    {
        cout << " " << dubArray[i]; // using the intarray
    }

    // asking user for a string item
    cout << "\n Please enter a item (string) to find postion in array: ";
    cin >> search3; // storing users input to search3

    // calling back to function to do linear search
    // invoking func
    cout << "\n Linear Search" << endl;
    Linear_Search(strArray, search3, 10); // array "string", using search "users item", the sizing of array being 10
                                         // finding the postion of the item in the aray, giving its index 0-9


}