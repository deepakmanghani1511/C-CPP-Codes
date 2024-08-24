#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
    int n=7;

    int i=0,ans=0;

    while(n!=0) 
    {
        int bit = n&1;
        //int bit = n|0;
        ans = ans + (bit*pow(10,i));
        n=n>>1;
        i++;
    }

    cout<<"Answer is"<<ans;
    return 0;
}