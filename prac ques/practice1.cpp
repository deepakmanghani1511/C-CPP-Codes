#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}

int diff(int a,int b) {
    return a-b;
}

int mult(int a,int b) {
    return a*b;
}

int divi(int a,int b) {
    return a/b;
}

int main() {
    int a,b,c,d,e=50,f=10;

    a=sum(e,f);
    cout<<a<<"\n";
    
    b=diff(e,f);
    cout<<b<<"\n";
    
    c=mult(e,f);
    cout<<c<<"\n";
    
    d=divi(e,f);
    cout<<d<<"\n";

    return 0;
}