#include<iostream>
using namespace std;

int getSum(int *arr, int n){

    cout << "Size: " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += i[arr];
    }
    return sum;
}

int main(){

    int arr[10] = {1,2,3,4,5,8};

    cout << "Sum is " << getSum(arr + 3,6) << endl;

    return 0;
}