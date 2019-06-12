#include <iostream>
#include <string>
#include <array>

using namespace std;

template <typename T>

// function to check if array is sorted, test int, double and string
bool isSorted(const T list[], int size)
{
    // loop to check and see if the next element is great than last element ot if its not
    for (int i = 0; i < size - 1; i++)
    {
        if (list[i] > list[i + 1])
        {
            return false;
        }
        else 
            return true;
    }
}

int main()
{
    // declaring vars
    int x; 
    string type;
    // delcaring arrays
    int intArray[10];
    double dubArray[10];
    string strArray[10];

    // Asking the user to pick what data type of the array 
    // if sorted they would like to see 
    cout << "Please enter the type of array you would like." << endl;
    cout << "Enter string, int or double: ";
    getline(cin, type);

    // if user enter in "int" than program will call back to funtion 
    // to see if int array is sorted
    if (type == "int")
    {
        //asking user tfor size of array
        cout << "please enter a number for the size of the array" << endl;
        cin >> x;
        // asking user to now fill the array with values
        cout << "please enter in values" << endl;
        // loop for stroing values in the array
        for (int i = 0; i < x; i++)
        {
            cin >> intArray[i];
        }
        // caling back to the IsSorted func
        // if the func returns ture then the outputed result is going to be sorted
        // if proven false then that program will say is not sorted, taking the bool
        // respones.
        cout << "The Array is" << (isSorted(intArray, x) ? "sorted" : "not sorted") << endl;

            return 0;
    }

    // if user enter in "double" than program will call back to funtion 
    // to see if double array is sorted
    if (type == "double")
    {
        //asking user tfor size of array
        cout << "please enter a number for the size of the array" << endl;
        cin >> x;
        // asking user to now fill the array with values
        cout << "please enter in decimal values" << endl;
        // loop for stroing values in the array
        for (int i = 0; i < x; i++)
        {
            cin >> dubArray[i];
        }
        // caling back to the IsSorted func
        // if the func returns ture then the outputed result is going to be sorted
        // if proven false then that program will say is not sorted, taking the bool
        // respones.
        cout << "The Array is" << (isSorted(dubArray, x) ? "sorted" : "not sorted") << endl;

            return 0;
    }

    // if user enter in "string" than program will call back to funtion 
    // to see if string array is sorted
    if (type == "string")
    {
        //asking user tfor size of array
        cout << "please enter a number for the size of the array" << endl;
        cin >> x;
        // asking user to now fill the array with values
        cout << "please enter in strings" << endl;
        // loop for stroing values in the array
        for (int i = 0; i < x; i++)
        {
            cin >> intArray[i];
        }
        // caling back to the IsSorted func
        // if the func returns ture then the outputed result is going to be sorted
        // if proven false then that program will say is not sorted, taking the bool
        // respones.
        cout << "The Array is" << (isSorted(strArray, x) ? "sorted" : "not sorted") << endl;

            return 0;
    }
}