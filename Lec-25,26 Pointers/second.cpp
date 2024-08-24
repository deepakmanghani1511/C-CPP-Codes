#include<iostream>
using namespace std;

int main () {

    //pointer to int is created, and pointing some garbage address
    // int *p;
    // cout << *p << endl;

    // int *p1=0;
    // cout << *p1 << endl;


    int i = 5 ;
    
    int *q = &i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int *p=0;
    cout << p << endl;
        // This will give you "Segmentation fault".
    //cout<<*p<<endl;
        
    p=&i;

    cout << p << endl;
    cout << *p << endl;


    int num = 2;
    int *P = &num;

    cout<<"Before "<< num << endl;
    (*P)++;
    cout << "After " << num << endl;


    // Copying one pointer to second pointer
    int *Q = P;
    cout << P << " - " << Q << endl;
    cout << *P << " - " << *Q << endl;

                        // int **q1=*P;
                        // cout<<*q1<<endl;
                        // cout<<**q1<<endl;

    i=5;
    int *t=&i;
    cout<< ++(*t) <<endl;

    cout<<"Before t"<<t<<endl;
    t=t+1;          // t=100+1*4;
    cout<<"After t"<<t<<endl;
    t=t+2;          // t=104+2*4
    cout<<"After t"<<t<<endl;
    
    return 0;
}  