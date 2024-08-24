#include<iostream>
#include<math.h>
using namespace std;

int pow(int i)
{
    int ans=1;
    for(int a=1 ; a<=i; a++)
        ans=ans*2;

    return ans;
}

int main()
{
   int i=0,ans=0,n=111;
   while(n)
   {
        int bit = n%10;
        ans = bit*pow(i) + ans;
        n=n/10;
        i++;
   }
   cout<<ans;
   return 0;
}