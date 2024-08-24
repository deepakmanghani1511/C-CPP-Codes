#include<iostream>
using namespace std;

int main(){

    int i = 5;
    cout << i << endl;
    {
        int i = 2;
        cout << i << endl;
    }

    return 0;
}