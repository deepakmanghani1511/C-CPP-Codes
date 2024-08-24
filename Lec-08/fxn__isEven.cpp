#include<iostream>
using namespace std;

bool isEven( int a) {
    //1--> odd
    //0--> Even
    if(a&1) {
        return 1;
    }
    // else {
    //     return 0;
    // }

    return 0;
}

int main() {
    int n1=3,n2=17,n3=20;
    

    if(isEven(n1))
        cout<< "Odd num" <<endl;
    else
        cout<< "Even num" <<endl;
    

    if(isEven(n2))
        cout<< "Odd num" <<endl;
    else
        cout<< "Even num" <<endl;
    

    if(isEven(n3))
        cout<< "Odd num" <<endl;
    else
        cout<< "Even num" <<endl;
        
    return 0;
}