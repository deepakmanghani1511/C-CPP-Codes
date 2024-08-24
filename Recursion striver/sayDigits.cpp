#include<bits/stdc++.h>
using namespace std;

                            // 321 -> Three Two One

void f(int n, string* s){
    if(n==0)
        return;
    int a = n % 10;
    f(n/10,s);
    cout<<s[a]<<" ";
}
int main(){
    int n; cin >> n;
    string s[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    f(n,s);
    return 0;
}