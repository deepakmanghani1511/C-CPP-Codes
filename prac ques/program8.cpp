#include<iostream>
using namespace std;

void calculaion(int n)
/*
{   //nth term
    int i=1;
    for( int ans=0,i=1; i<=n; i++)
    {
        ans = 3*i + 7;
        if(i==n)
            cout<<ans;
    }
}
*/

/*
{   //Sum of no of terms
    int i=1;
    for(int i=1, ans=0;i<=n;i++)
    {
        ans = ans + ( i*3 + 7 );
    }
    cout<< "The Sum of " << n << "th" << " terms = " << ans;
}
*/

{   //Sequence
    int i=1;
    for(int i=1;i<=n;i++)
    {
        cout<< (i*3 + 7) <<" ";
    }
}

int main() {

    int n=7;
    calculaion(n);
    return 0;
}