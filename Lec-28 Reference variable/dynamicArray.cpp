#include<iostream>
using namespace std;

int getSum(int* arr, int n){

    // for example: 
                    // int* arr = 710;
                    // int n;   given

                    // 0[710]=710+0*4=710
                    // 1[710]=710+1*4=714
                    // 2[710]=710+2*4=718   to access elemnt

    int sum = 0;
    for( int i=0; i<n; i++){
        sum += i[arr];
    }
    return sum;
    
}

int main(){

    int n;
    cin>>n;

    //BAD PRACTICE
    // int arr[n];

    // Dynamic Allocation
    int* arr = new int[n];
    
    //Input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = getSum(arr, n);

    cout << "Answer is " << ans << endl;

    return 0;
}