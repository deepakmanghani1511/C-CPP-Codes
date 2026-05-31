// Using function Fibonaci series upto nth term 
#include<iostream>
using namespace std;

void sequence(int n) 
{
    int i,a,b,c;
    for(i=1,a=0,b=1,c; i<=n; i++)
        {
            c=a+b;
            cout<<b<<" ";
            a=b;
            b=c;
        }
    cout<<endl;
}

int main() {
 
    int n1=9,n2=13;
    sequence(n1);
    sequence(n2);
    return 0;
}