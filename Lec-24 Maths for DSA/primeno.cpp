#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    
    int count = 0;

    if(n==1)
        return 0;

    else if(n==2 || n==3)
        return 1;

    for(int i=2; i<n; i++){
        if( n%i != 0 )
            count++;
    }

    return 1;
}

int main(){

    int n;
    cin>>n;

    if(isPrime(n))
        cout<<"Prime no"<<endl;
    else
        cout<<"Non-Prime no"<<endl;

    return 0;
}