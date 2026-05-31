#include<iostream>
using namespace std;

void isEven ( int n ) {

    // n%2 or n&1 or n|0

    if(n&1)
        cout<< n << " is odd num" << endl;
    else 
        cout<< n << " is even num" << endl;
 
}

int main() {

    // n%2 or n&1 or n|0


/*    int n1=4,n2=5;
    
    if(n1%2)
        cout<< n1 <<" is odd number\n";
    else    
        cout<< n1 <<" is even number\n";
    
    if(n2%2)
        cout<< n2 << "is odd number\n";
    else
        cout<< n2 << "is even number\n";
*/

    int n1=4,n2=5,n3=7,a=15, b=20;
    
    isEven(n1);
    isEven(n2);
    isEven(n3);
    isEven(a);
    isEven(b);

    return 0;
}