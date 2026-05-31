#include<iostream>
using namespace std;

int main() {

    int a,b;
    cout<<"Enter 02 elememts:"<< endl;
    cin>>a>>b;

    char op;
    cout<<"Enter operation that you want to perform: "<< endl;
    cin>>op;

    switch( op ) {
        case '+': cout<<a+b<<endl;
                break;

        case '-': cout<<a-b<<endl;
                break;

        case '*': cout<<a*b<<endl;
                break;
        
        case '/': cout<<a/b<<endl;
                break;
        
        case '%': cout<<a%b<<endl;
                break;
        
        default:
                break;
       }

        return 0;
}