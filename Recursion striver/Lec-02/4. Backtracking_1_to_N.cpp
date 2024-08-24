// #include<iostream>
// using namespace std;

// void f(int i, int n){

//     if(i<1)
//         return;
    
//     f(i-1,n);
    
//     cout<<i<<" ";
// }

// int main(){

//     int n;
//     cin>>n;

//     f(n,n);
    
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;

void f(int i){

    if(i==0)  // if(i<1)
        return;
    f(i-1);
    cout << i << endl;

}

int main(){

    int n;
    cin >> n;

    f(n);

    return 0;
}