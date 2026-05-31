#include<iostream>
using namespace std;

int setbit( int n) {

    int count = 0;
    while ( n )
    {
        if( n&1 )
            count++;
        n=n>>1;
    }
    
    return count;

}

int main() {

    int a=7, b=9, c=19, totsetbits;
    totsetbits = setbit(a) + setbit(b) + setbit(c);
        cout<<"The total setbits are = " << totsetbits <<endl;

    return 0;
}

