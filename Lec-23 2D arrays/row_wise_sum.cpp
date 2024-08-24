#include<iostream>
using namespace std;
    //row sum
    void rowSum(int arr[][3],int row,int col){
        for(int n=0;n<row;n++){
            int sum=0;
            for(int m=0;m<col;m++){
                sum+=arr[n][m];
            }
            cout<<"Row "<<n+1<<" sum is = "<<sum<<endl;
        }
    }
    //col sum
    void colSum(int arr[][3],int row,int col){
        for(int m=0;m<col;m++){
            int sum=0;
            for(int n=0;n<row;n++){
                sum+=arr[n][m];
            }
            cout<<"Col "<<m+1<<" sum is = "<<sum<<endl;
        }
    }

int main(){
    int arr[4][3];
    //Input
    for(int row=0;row<4;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    //Output
    for(int row=0;row<4;row++){
        for(int col=0;col<3;col++){
           cout<<arr[row][col]<<" ";
        } cout<<endl;
    }
    //fxn calling
    rowSum(arr,4,3);
    colSum(arr,4,3);

    return 0;
}