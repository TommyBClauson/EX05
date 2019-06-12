#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

// template prefix
template <typename T>

// delcaring shuffle function
void shuffle(vector<T> &vect)
{
    // using srand for shuffling
    srand(time(0));

    // loop fir shuffling X amound of times needed
    for (int i = 0; i <vect.size(); i++)
    {
        // using rand to get random ints
        int index = rand() % vect.size();
        T temp = vect[index];
        vect[index] = vect[i];
        vect[i] = temp;
    }
}


int main()
{
    // delcaing var num to store users entered in integers
    int num;

    // delcaing vector datatype int called vect
    vector<int> vect;

    // asking user to fill vector with 10 integer values
    cout << "Please enter in 10 integer values." << endl;

    // loop for storing users inputs
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter Here: ";
        cin >> num;
        vect.push_back(num);
    }

    // Shuffling the integers inside vector
    shuffle(vect);

    // outputting shuffled vector
    cout <<"\nShuffled integers inside vector are: " << endl;

    // loop to print out the vector
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }

    return 0;
}