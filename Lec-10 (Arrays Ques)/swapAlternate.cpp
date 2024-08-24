#include<iostream>
using namespace std;

int main() {  

    int arr[7]={1,2,3,4,5,6,7};
    int n1=7;
    for( int i=0; i<n1; i+=2){

                //My approach
            // if(i+1==n1){
            //     break;
            // }
            //swap(a[i],a[i+1]);
        
        if(i+1<n1){
            swap(arr[i], arr[i+1]);
        }
    }
    for( int j=0; j<n1; j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}