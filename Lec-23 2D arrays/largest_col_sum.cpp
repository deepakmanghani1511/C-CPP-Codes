#include<iostream>
#include<limits.h>
using namespace std;

int largestRowSum(int arr[][5], int row, int col){
    
    int maxi = INT_MIN;
    int rowINDEX = -1;   // ?
    for(int m=0; m<row; m++){

        //calculating each row sum
        int sum=0;
        for(int n=0; n<col; n++){
            sum+=arr[m][n];
        }
        //finding max from compairing each
        if(sum>maxi){
            maxi=sum;
            rowINDEX=row;
        }

    }
    cout << "The largest Row Sum is = "<< maxi << endl;
    return rowINDEX;
}


int main(){

    int arr[4][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
        };

    cout << " Max row is at index " << largestRowSum(arr,4,5)<< endl;
    
    return 0;
}