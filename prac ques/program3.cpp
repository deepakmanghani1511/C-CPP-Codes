#include<iostream>
using namespace std;

int pow() {
    
    int a=5,b=5;
    // cout<< "Enter the number and its power: ";
    // cin>> a >> b;
    int i = 1 , ans = 1;
    while( i <= b ) {
        ans = ans * a;
        i++;
    }
    return ans;
}

int main() {
 
    int a,b,c;
    
    a=pow();
    cout<<"Answer is = " <<a<<"\n";
    b=pow();
    cout<<"Answer is = " <<b<<'\n';
    c=pow(); 
    cout<<"Answer is = " <<c<<"\n";
    
    return 0;
}