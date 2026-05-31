#include<iostream>
using namespace std;

void isPrime(int N) {

    bool flag=0;
    for(int i=2; i<=N/2; i++)
        {
            if(N%i==0) 
            {
                flag=1;
                break;
            }
            //flag=0;
        }

        if(flag)
            cout<< N << " is a " << "Non-prime no\n";
        else
            cout<< N << " is a " << "Prime no\n";

}

int main() {
    
    int a=3,b=25,c=31,d=71,e=55,f=21;
    isPrime(a);
    isPrime(b);
    isPrime(c);
    isPrime(d);
    isPrime(e);
    isPrime(f);
    return 0;
}