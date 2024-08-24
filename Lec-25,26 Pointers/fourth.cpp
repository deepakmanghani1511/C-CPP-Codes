#include<iostream>
using namespace std;

int main() {

// Diff btw pointer n array

//wrong output in vs code
    int temp[10]={1,2};
    cout << "1st " <<sizeof(temp) << endl;  //40
    cout << "2nd " << sizeof(*temp) << endl;    //4 
    cout << "3rd " << sizeof(&temp) << endl;    //8
    cout<<endl;

    int *ptr = &temp[0];
    cout << "1st " << sizeof(ptr) << endl;  //8
    cout << "2nd " << sizeof(*ptr) << endl; //4
    cout << "3rd " << sizeof(&temp) << endl; //8




    return 0;
}