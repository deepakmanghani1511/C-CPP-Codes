#include<bits/stdc++.h>
using namespace std;

// My approach

/*
bool f(int* arr,int i,int n, int key){
    if(i>=n) return false;
    if(key == arr[i])
        return true;
    return f(arr,i+1,n,key);
}   

int main(){

    int arr[7]={2,6,10,9,11,-18,50};
    int n = 7;
    int target; 
    cout << "Target element is: " << endl;
    cin>>target;
    cout << f(arr,0,n,target) << endl;
    return 0;
} */


// Babbar Bhaiya approach
bool linearsearch(int* arr, int n, int key){
    if(n==0)
        return false;
    if(arr[0]==key)
        return true;
    return linearsearch(arr + 1,n-1,key);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5;
    int key; cin >> key;
    cout<<linearsearch(arr,n,key)<<endl;
    return 0;
}