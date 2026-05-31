#include<iostream>
using namespace std;

int main() {
    int n=29;
    bool flag;

    
    //Approach 01
    /*
    for(int i=2;i<n;i++)
    {
        if(n%i==0)   
        {
            //Remainder=0 so not a prime no
            flag=1;
            break;
        }
        //else
        //    flag=0;
    }

    if(flag)
        cout<<"Not a prime no";
    else    
        cout<<"Prime no";
    */

    //Appraoch 02

    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            //Remainder=0 so not a prime no
            flag=1;
            break; 
        }
        // 
            flag=0;
    }  

    if(flag)
        cout<<"Not a prime no";
    else    
        cout<<"Prime no";
    return 0;
}