#include<iostream>
#include<math.h>
using namespace std;

int main() {
            int rev = 0;
        int x=123,a;
        while(x)
            {   
              
              //123   0*10+3=3     12     
              //12    3*10+2=32    1
              //1     32*10+1=321  0

            a = x%10;
                
            if((rev > INT_MAX || rev < INT_MIN))
                return 0;
            
                rev = rev*10 + a;
                x=x/10;
        
        }
         cout<< rev;  
    return 0;
}