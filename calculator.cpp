#include<iostream>
using namespace std;

int main() {
    
    int a=3,b=4;
    char c;
    cin>>c;
    switch( c ) 
    {
        case '+': 
            cout<< "Enter 02 elements: ";
            cin>> a >> b;
            cout<< "\nAddition is = "<< a + b <<"\n";
            break;
        
        case '-':
            cout<< " Enter 02 elements: ";
            cin>> a >> b;
            cout<< "Subtraction is ="<< a - b<< "\n";
            break;

        case '*':
            cout<< "Enter 02 elements: ";
            cin>> a >> b;
            cout<< "Multipication is ="<< a*b << "\n";
            break;

        case '/':
            cout<< "Enter 02 elements: ";
            cin>> a >> b;
            cout<< "Division ="<< a/b <<"\n";
            break;

        case '%':
            cout<< "Enter 02 elements: ";
            cin>> a >> b;
            cout<< "Modulas = " << a%b<<"\n";
            break;

    }

    return 0;

}