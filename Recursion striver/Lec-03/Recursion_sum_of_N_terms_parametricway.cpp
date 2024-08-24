#include<bits/stdc++.h>
using namespace std;

//My Approach

// We can use global variable instead of using refernce variable

// void f(int &Sum, int i, int n){
//     if(i > n)
//         return;
//     Sum += i;
//     f(Sum, i+1, n);
// }

// int main(){
//     int n;
//     cin >> n;

//     int sum=0;
//     f(sum,1,n);
    
//     cout << sum << endl;
    
//     return 0;
// }


// int f(int i, int n){
//     // base case
//     if(i > n)
//         return 0;
//     return i + f(i+1,n);
// }

// int main(){
//     int n;
//     cin >> n;
    
//     int ans = f(1,n);
//     cout << ans << endl;
    
//     return 0;
// }

// int f(int i){
//     if(i < 1)
//         return 0;
//     return i + f(i-1);
// }

// int main(){

//     int n;
//     cin >> n;
    
//     cout << f(n) << endl;

//     return 0;
// }


// void f(int &sum, int i){
//     if(i < 1)
//         return;
//     sum += i;
//     f(sum,i-1);
// }

// int main(){

//     int n;
//     cin >> n;
//     int sum = 0;
    
//     f(sum,n);
//     cout << sum << endl;
//     return 0;
// }





// Parameterised way
void f(int i, int sum){
    if(i < 1)
    {
        cout << sum << endl;
        return;
    }
    f(i-1, sum+i);
}

int main(){
    int n;
    cin >> n;

    f(n,0);
    return 0;
}
