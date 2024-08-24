#include<iostream>
using namespace std;

void print(char *a, int size) {
    for (int i=0 ;i <size-1; ++i)
        cout << a[i] << endl;
}


int main(){

    int arr[5] = {1,2,3,4,5};

    cout << arr << endl;


    char ch[6] = "abcde";
    // Prints entire string
    cout << ch << endl;
    cout << &ch << endl;
    cout << &ch[0] << endl;
    cout << *ch << endl;
    cout << ch[1] << endl;
    
    // ERROR
    // cout << *ch[2] << endl;

    
    /*

    Note:  RISKY as it might be possible that we can reach somewhere. 

    char *C = "abcde";
    cout << C << endl;
    cout << *C << endl;
    
    */


    char *c = &ch[0];
    // Prints entire string
    cout << ch << endl;
    cout << c << endl;
    cout << *c << endl;
    cout << c[2] << endl;
    
    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
    cout << *p << endl;

    print(ch + 2,6);


    //Q1
    // int first=110;
    // int *a = &first;
    // int **q = &a;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl;

    //Q2
    int first=100;
    int *p1 = &first;
    int **q1 = &p1;
    int second = ++(**q1);
    int *r = *q1;
    ++(*r);
    cout << first << " " << second << endl;

    //Q3
    
    return 0;
}