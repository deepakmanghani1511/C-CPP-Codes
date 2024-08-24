#include<iostream>
using namespace std;

int main() {
    
    int a[6] = { 6,5,4,3,2,1 };
    int n = 6;

    for( int i = 1; i<n; i++) {
        for( int j = i-1; j >= 0; j--) {
            if ( a[i] > a[j] ) {
                for( int k = i - 1; k > j; k--) {
                    swap( a[i], a[j]);
                }
            }    
        }
    }

    for( int m = 0; m < n; m++) {
        cout << a[m] << " ";
    }
    return 0;
}