#include<iostream>
using namespace std;

        // Method-1

// void rev( int a[], int n) 
// {
//     for( int i=0; i<n; i++)
//         swap( a[i], a[(n-1)-i]);
// }

        // Method-2

// void rev( int a[], int n)
// {
//     for( int i=0; i<n; i++)
//     {
//         t=a[i];
//         a[i]=a[n-1-i];
//         a[n-1-i]=t;
//     }
// }

        // Method -3

// void rev( int a[], int n)
// {
//     for( int i=0, j=n-1; i<j; i++, j--)
//     {
//         a[i] = a[i] + a[j];
//         a[j] = a[i] - a[j];
//         a[j] = a[i] - a[j;]
//     }
// }
//         // Method -4

void rev( int a[], int n)
{
    for( int i = 0, j = n-1; i<j; i++, j--)
    {
        a[i] = a[i]*a[j];
        a[j] = a[i]/a[j];
        a[i] = a[i]/a[j];
    }
}
  
void printrev( int a[], int n) 
{
    for( int i=0; i<n; i++)
        cout << a[i] << " ";
}

int main() {

    int a[6] = {10,20,30,40,50,60};
    int b[5] = { 5,10,-15,-5,35};

    rev(a,6);
    rev(b,5);

    printrev(a,6);
    printrev(b,5);
    
    return 0;
}