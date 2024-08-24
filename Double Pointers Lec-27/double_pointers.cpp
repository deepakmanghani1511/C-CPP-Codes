#include<iostream>
using namespace std;

void update(int **P){
    
    p = p + 1;
    *p = *p + 1;
    
}

int main(){

    int i = 5;
    // pointer
    int *p = &i;
    // double pointer
    int **p2 = &p;

    // Accessing 5 in different ways
    cout << i << endl;
    cout << *p << endl;
    cout << **p2 << endl;

    // Accessing address of i in different ways
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    
    // Accessing address of pointer p in different ways
    cout << &p << endl;
    cout << p2 << endl;

    // Accessing address of pointer p2
    cout << &p2 << endl;
    
    return 0;
}