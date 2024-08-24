#include<bits/stdc++.h>
using namespace std;

// void f(int *arr, int left, int right){
//     if(left >= right)
//         return;
//     swap(arr[left], arr[right-1]);
//     f(arr, left+1, right-1);
// }

// int main(){

//     int arr[5]={1,2,4,6,7};
//     cout<<"Before calling: " << endl;
//     for(int i=0;i<5;i++)
//         cout<<arr[i]<<" ";
//     cout << endl;
    
//     f(arr,0,5);
//     cout<<"After calling: " << endl;
//     for(int i=0;i<5;i++)
//         cout<<arr[i]<<" ";
    
//     return 0;
// }

void f(int *a, int i, int n){
    if(i>=n/2)
    // if(i == n/2 + 1)
        return;
    swap(a[i],a[n-i-1]);
    f(a,++i,n);
}

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Before calling: " << endl;
    for(int i=0;i<10;i++)
        cout << arr[i] << " ";
    cout<<endl;
    
    //fxn calling
    f(arr,0,10);

    cout << "After calling: " << endl;
    for(int j=0;j<10;j++)
        cout << arr[j] << " ";

    return 0;
}