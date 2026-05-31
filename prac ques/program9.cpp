//Calculating tot no of set bits
#include<iostream>
using namespace std;

int setbits(int n) {
    
    int count=0;
    while(n!=0)
    {
        if(n&1)
            count++;

        n=n>>1;
    }

/* 
    Not working this type of loop
    
    int count;
    for(int count=0; n>0; n=n>>1)
        {
            if(n&1)
                count++;
        }
*/
    return count;
}

int Setbits(int a,int b,int c) 
{
    return setbits(a) + setbits(b) + setbits(c);
}

int main() {

    int a=7,b=8,c=9,ans;
    ans=Setbits(a,b,c);
    cout<< "Total setbits = " << ans;
    return 0;
}