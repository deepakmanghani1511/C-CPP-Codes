#include<iostream>
using namespace std;

int main() {
    int n=1330;
    switch(1)
    {
        case 1:
            cout<< "Rs100 notes are= " << n/100 <<endl;
            n=n%100;
        
        case 2:
            cout<< "Rs50 notes are= " << n/50 <<endl;
            n=n%50;
        
        case 3:
            cout<< "Rs10 notes are " << n/20 <<endl;
            n=n%20;
        
        case 4:
            cout<< "Rs1 notes are " << n/1 <<endl;
            n=n%1;
            break;
            
    }
    return 0;
}