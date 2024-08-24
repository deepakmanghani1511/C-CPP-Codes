#include<bits/stdc++.h>
using namespace std;

//My approach
/*
bool isSorted(int* a,int i,int n){
    if(i >= n)
        return true;
    if(a[i] > a[i+1])
        return false;
    return isSorted(a,i+1,n);
}

int main(){
    int arr[10]={2,4,9,18,25,35,50,77,89,100};
    cout << isSorted(arr,0,10-1) << endl;
    return 0;
}
*/

//Babbar bhaiya approach
bool isSorted(int *arr, int n){

    if(n==0 || n==1)
        return true;
    
    if(arr[0] > arr[1])
        return false;
    else{
        bool remaining = isSorted(arr+1,n-1);
        return remaining;
    }
}

int main(){
    int arr[5]={2,4,16,8,10};
    int size = 5;
    bool ans = isSorted(arr,size);
    if(ans)
        cout << "Array is sorted" << endl;
    else    
        cout << "Array is not sorted" << endl;
    return 0;
}