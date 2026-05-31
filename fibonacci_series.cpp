#include<iostream>
using namespace std;

int main() {
    int n=10;
    int a=0,b=1,c,i;
    cout<<a<<" "<<b<<" ";
    for( i=1;i<n-1;i++)
    {
        c=a+b;
        cout<<c<<" ";       // 0 1 1 2 3 5 8 13 21 34
        a=b;
        b=c;
    }

}