//Using function nth term of the fibonaci seires 
#include<iostream>
using namespace std;

void printno(int n) 
{
    cout<< "The " << n << "th of the fibonaci series is = ";
    for(int a=0,b=1,i=1,c; i<=n; i++)
    {
        if(i==n)
            cout<< b << endl;
        c=a+b;
        a=b;
        b=c;
    }
    
}

int main() 
{
    int n1=10,n2=30,n3=25;
    
    printno(n1);
    printno(n2);
    printno(n3);

    return 0;
}
