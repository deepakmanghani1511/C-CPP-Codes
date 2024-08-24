#include<iostream>
using namespace std;

void f(int n){
    cout << n <<" ";
    f(n);
}

int main() {
    
    int n;
    cin >> n;
    f(n);

    return 0;
}