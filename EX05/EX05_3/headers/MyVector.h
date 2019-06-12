#ifndef MYVECTOR_H
#define MYVECTOR_H
#include <string>
#include <vector>

using namespace std;

// template prefix
template <typename T>
// Defining class "myVector"
class MyVector
{

    private:
        // declaring vectors elements
        T elements[100];
        // dec;aring vectors size var
        int vectsize;
    
    public:
        myVector();
        myVector(int);
        myVector(int, T);
        void push_back(T);
        void pop_back();
        unsigned size()const;
        T at(int)const;
        bool empty()const;
        void clear();
        void swap(MyVector vect2);
        

};
#endif