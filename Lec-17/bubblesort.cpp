#include<iostream>
using namespace std;

int main() {

    //int array[10] = { 10,7,6,9,18,15,5,11,13,20}; 
    int array[10];
    int n = 10;

    for( int j =0; j<n; j++){
        
        cin >> array[j];
        cout<<" ";

    } cout<<endl;

    bool swapped;
    
    for( int i=0; i<n-1; i++){
        swapped = false;
        for( int j=0; j<n-1-i; j++) {
            if( array[j] > array[j+1] ) {
                swap( array[j],array[j+1] );
                swapped = true;
            }
        }
        if( swapped == false )
            break;
    }
    for( int i=0; i<n; i++){
        cout << array[i] << " ";
    }
    return 0;
}