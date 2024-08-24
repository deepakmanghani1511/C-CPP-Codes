#include<bits/stdc++.h>
using namespace std;

// void f(int i,int n){
//     if(i == n+1)     // if(i > n) or if(i >= n+1)
//         return;
//     cout << "Jai Hind" << endl;
//     f(i+1,n);    // f(++i,n);
// }

void f1(int n){
    if(n <= 0)      // if(n == 0) or if(n < 1)
        return;
    cout << "Jai Hind" << endl;
    f1(n-1);    // f1(--n);
}

int main(){

    int n;
    cin >> n;
    // f(1,n);
    f1(n);

    return 0;
}


