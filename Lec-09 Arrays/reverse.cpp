#include<iostream>
using namespace std;

void reverse( int arr[], int n) {
    // 10 20 30 40 50 60
    int start = 0;
    int end = n-1;
    
    while( end > start)
    {
        swap( arr[start], arr[end]);
        start++;
        end--;
    }
}

void printarray( int arr[], int n) {
    for( int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    }


int main() {

    int array[8] = { 10,20,30,40,50,60,70,80};
    int brray[5] = { -5,10,25,35,7};

    reverse( array, 8);
    printarray( array, 8);

    reverse( brray, 5);
    printarray( brray,5);

    return 0;
}