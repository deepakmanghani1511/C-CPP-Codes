// Fibonaci series upto nth term
#include<iostream>
using namespace std;

int main() 
{
    int n=20;
    cout<<"The fibonaci series upto "<< n << "th terms is: "<<endl;
    for(int i=1, a=0, b=1,c; i<=n; i++)
    {
        cout<<b<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}