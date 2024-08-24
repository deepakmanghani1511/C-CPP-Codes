#include<bits/stdc++.h>
using namespace std;

// Functional Approach
// int fact(int n){
//     if(n == 1)
//         return 1;
//     return n * fact(n-1);
// }

// int main(){ 
//     int n;
//     cin >> n; 
    
//     cout << fact(n) << endl;

//     return 0;
// }


// Parametric way
/*
    void fact(int n, int ans){
        if(n<1){
        cout << ans;
        return;
        }
        fact(n-1,ans*n);
    }

int main(){
    int n;
    cin >> n;

    fact(n,1);
    return 0;
    }
*/


/* My approach */

// int f(int ans, int n){
//     if(n == 1)
//         return ans;
//     return f(ans*n,n-1);
// }

// int main(){
//     int n; cin >> n;
//     int ans = 1;
//     cout << f(ans,n);
//     return 0;
// }


/* My approach */

int f(int i, int ans, int n){
    if( i==n+1 )
        return ans;
    return f(i+1,ans*i,n);
}

int main(){
    int n; cin >> n;
    int ans = 1, i = 1;
    cout << f(i,ans,n);
    return 0;
}