#include<iostream>
using namespace std;

int fact( int n ) {
    int t;

    for( t = 1; n>=1 ; n-- )
        t=t*n;
    
    return t;
}


int main() {
    
    int ans,n1=5,n2=10;
    
    ans=fact(n1);
    cout<< "Factorial of " << n1 << " = " << ans <<endl;
    
    ans=fact(n2);
    cout<< "Factorial of " << n2 << " = " << ans <<endl;
    
    return 0;
}