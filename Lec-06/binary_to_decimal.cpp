#include<iostream>
#include<math.h>

using namespace std;

int main()
{
   int ans=0,i=0,n=111111;
   while(n)
   {
        int bit = n%10;
        ans = bit*pow(2,i) + ans;
        n=n/10;
        i++;
   }
   cout<<ans;
   return 0;
}