#include<bits/stdc++.h>
using namespace std;

void rowSum(int arr[][3], int row, int col){
    //Row Sum
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum+=arr[row][col];
        }
        cout<<"Row "<<row+1<<" sum is = "<< sum <<endl;
    }
}

void colSum(int arr[][3], int row, int col){
    //Col Sum
    for(int col=0; col<3; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum+=arr[row][col];
        }
        cout<<"Col "<<col+1<<" sum is = "<< sum <<endl;
    }
}


int main(){

    int arr[3][3]={
        {1, 2, 3}, 
        {4, 5, 6},
        {7, 8, 9}
    };

    rowSum(arr,3,3);
    colSum(arr,3,3);

    return 0;
}
