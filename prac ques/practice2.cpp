#include<iostream>
using namespace std;

int power(int a, int b) {
    
    int ans=1,i=1;
    
    while(i<=b) {
        ans=ans*a;
        i++;
    }
    
    return ans;
}

int main() {
    
    int a,b,c;
    // cout<<"Enter the number and its power: ";
    // cin>>a>>b;
    a=2,b=3;
    c=power(a,b);
    cout<<"Answer is"<<c;
    return 0;

}

