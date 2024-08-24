#include<iostream>
using namespace std;

void f(int n, int i){
    
    // cout<<n<<" ";
    // if(n==i)
    //     return;    
    // f(n-1,i);


    // if(i>n){
    //     return;
    // }
    // cout<<n<<" ";
    // f(n-1,i);


    if(i<1)
        return;
    cout<<i<<" ";
    f(i-1,n);
}

int main(){

    int n;
    cin>>n;

    f(n,n);
    
    return 0;
}