#include<iostream>
using namespace std;

int max( int a[], int n)
{
    int Max = a[0];
    for( int i = 0; i < n-1; i++)
    {
        if( a[i+1] > Max)
            Max = a[i+1];
    } return Max;
}

int min( int a[], int n)
{
    int Mini = a[0];
    for( int i = 0; i < n-1; i++)
    {
        if( a[i+1] < Mini )
            Mini = a[i+1];
    } return Mini; 
}   

//My approach
int main() {

    int a[10] = {-10,20,40,5,67,70,80,90};
    int maxi,mini;

    maxi = max(a,10);
    cout << "Maximum element of the array :" << maxi << endl;

    mini = min(a,10);
    cout << "Minimum element of the array :" << mini << endl;
 
    return 0;
}