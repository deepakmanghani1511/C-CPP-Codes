#include<bits/stdc++.h>
using namespace std;

int f(int n,int sum) {
    if(n == 0)
        return sum;
    return f(n-1,sum+n);
}

int main(){
    int n; cin >> n;
    int sum = 0;
    cout << f(n,sum) << endl;
    return 0;
}