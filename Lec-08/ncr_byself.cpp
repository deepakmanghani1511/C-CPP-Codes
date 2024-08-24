#include<iostream>
using namespace std;

int nCr() 
{

    int N=5, r=1, R; 
        R=N-r;

    int t,u,v;
    for(int t=1, N=5; N>=1; N--)
    {
        t=N*t;
    }
    
    for(int u=1, r=1; r>=1; r--)
    {
        u=r*u;
    }

    for(int v=1, R=4; R>=1; R--)
    {
        v=R*v;
    }

    return (t/(u*v));

}

int main() {

    int ans;
    ans=nCr();
    cout<<"Answer is = "<<ans;
    return 0;

}

