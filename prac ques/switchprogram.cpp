#include<iostream>
using namespace std;

int main() 
{
    int n = 1995; 
    
    switch(1)
    {
        case 1:
            cout << "200Rs notes = " << n/200 << endl;
            n%=200;
        
        case 2:
            cout << "100Rs notes = " << n/100 << endl;
            n%=100;

        case 3:
            cout << "50Rs notes = " << n/50 << endl;
            n%=50;

        case 4:
            cout << "20Rs notes = " << n/20 << endl;
            n%=20;

        case 5:
            cout << "10Rs notes = " << n/10 << endl;
            n%=10;

        case 6:
            cout << "05Rs notes = " << n/5 << endl;
            n%=5;
   }
    return 0;
}