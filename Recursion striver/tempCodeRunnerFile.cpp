#include<bits/stdc++.h>
using namespace std;

//My approach

/*
bool binarysearch(int* arr, int start, int end, int key){
    if(start >= end)    return false;
    int mid =(start + (end-start)/2);
    if(arr[mid]==key)
        return true;
    else if(key > arr[mid]) {
        // start=mid+1;
        return binarysearch(arr,mid+1,end,key);
    }
    else{ 
        // end=mid-1;
        return binarysearch(arr,start,mid-1,key);
    }
} 
*/

//Babbar bhaiya approach
bool binarysearch(int* arr,int mid, int start, int end, int size, int key){

    mid=(start+end)/2;
    if(arr[mid]==key)   return true;
    else if(start>end)  return false;
    else if(key > arr[mid]) return binarysearch(arr+mid+1,mid,0,mid-1,mid,key);
    else return binarysearch(arr,mid,0,mid-1,mid,key);
}

int main(){
    int arr[10]={3,8,9,10,12,16,20,27,29,30};
    int size=10;
    int key; cin>>key;
    cout << binarysearch(arr,0,0,size-1,size,key)<<endl;
    return 0;
}