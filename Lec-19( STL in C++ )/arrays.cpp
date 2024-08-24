#include<iostream>
#include<array>
// Arrays, as we all know, are collection of homogenous objects. 
// Array container in STL provides us the implementation of static array, though it is rarely used in competitive programming as its static in nature but we'll still discuss array container cause it provides some member functions and non-member functions which gives it an edge over the array defined classically like, int array_name[array_size].
// STL array uses in competitive programing
using namespace std;

int main() {

    int basic[4] = {1,2,3,4};

    array<int,4> a = {1,2,3,4};
    array<int,0> b;

    int size = a.size();

    for(int i=0; i<size; i++){
        cout << a[i] << endl;
    }

    cout<< "Element at 2nd index-> " << a.at(2) << endl;
    
    cout<< "Empty or not ->" << a.empty() << endl;
    cout<< "Empty or not ->" << b.empty() << endl;

    cout<< "First element ->" << a.front() << endl;
    cout<< "last element ->" << a.back() << endl;

    return 0;
}