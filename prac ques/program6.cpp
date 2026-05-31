#include<iostream>
using namespace std;

int fact(int n)
{
    int t;
    for(t=1;n>=1;n--)
        t=t*n;
    return t;
}

int nCr(int a, int b) 
{
    return fact(a)/( fact(b) * fact(a-b) );
}

int main() {
    
    int x=5,y=3,z=6,X=4,ans;
    ans=nCr(x,y);
    cout<<"nCr of "<< x << " and " << y << " is = " << ans << '\n';
    ans=nCr(z,x);
    cout<<"nCr of "<< z << " and " << x << " is = " << ans << '\n';
    ans=nCr(z,y);
    cout<<"nCr of "<< z << " and " << y << " is = " << ans << '\n';
    ans=nCr(X,y);
    cout<<"nCr of "<< X << " and " << y << " is = " << ans << '\n';            

    return 0;

}