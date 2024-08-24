#include<iostream>
using namespace std;

// int pow( int num1, int num2)
int pow( int a, int b)
{

    int ans = 1;
//  for( int i = 1; i<=num2; i++)
    for( int i = 1; i<=b; i++) {
        ans = ans * a;
    }
    return ans;
}

int main() {
    
    /* int a,b,c;
        c=pow(5,3);
    */

    /* int c;
        c=pow(5,4);
    */
    
    int a=12,b=4,c;
    c=pow(a,b);
    

    cout<<"Answer is = "<< c <<endl;
    cout<<"Hi";
    return 0;
}