#include<iostream>
using namespace std;

void printcounting(int n) {
    int t=1;
    while(t<=n){

        if(t==6 || t==9) {     // if( t==6 && t==9)
            t++;
            continue;
            }
        cout<<t<<" ";
        t++;
    }
}

int main() {
    int n=10;
    printcounting(n); // print counting upto 10 except 6,9
    return 0;
}