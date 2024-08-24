#include<bits/stdc++.h>
using namespace std;

void rowSum(int arr[][5], int row, int col){
    int max=INT_MIN, a = 0;
    for( int m=0; m<row; m++){
        int sum=0;
        for(int n=0; n<col; n++){
                sum+=arr[m][n];
        }
        if(sum > max){
            max = sum;
            a = m + 1;
        }
    }
    cout<<"The largest row is = "<< m + 1 <<" have sum = "<< max <<endl;

}

void rowsum1(int arr[][5], int ARR, int row, int col){
    
   while( index < (row*col) ){
        for(int m=0; m<row; m++){
            for(int n=0; n<col; n++){
                ARR[index++]=arr[m][n];
        }
    }
   }

   for(int index = 0;index < row*col; index++){
        maxi = max(maxi, ARR[index]);
   }

   cout<<"Largest row is = "<< maxi << endl;
}

int main(){

    int arr[5][5];

    for(int row=0; row<5; row++){
        for(int col=0; col<5; col++){
            cin>>arr[row][col];
        }
    }

    rowSum(arr,5,5);


    int ARR[25];
    rowsum1(arr,ARR,5,5);

    return 0;
}