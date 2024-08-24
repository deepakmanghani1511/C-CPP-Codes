#include<iostream>
using namespace std;

    // BAD PRACTICE

    /*

        int* fun(int n) {

            int* ptr=&n;
            return ptr;
        
        }

    */

void update(int *p){

    *p = *p + 1;
    cout << " inside " << *p << endl;

}

void print(int *p){

    cout << p << endl;
    cout << *p << endl;

}

int main(){

    int value = 5;
    int *p = &value;

    // print(p);

    // Function calling
    cout << "Before calling address is: " << *p << endl;
    update(p);
    cout << "After calling address is: " << *p << endl;
    
    return 0;

}