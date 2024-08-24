#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){

    for(int n=0;n<row;n++){
        for(int m=0;m<col;m++){

            if(arr[n][m] == target)
                return 1; 
        }
    }
    return 0;
}

int main(){

    int arr[3][4];
    //Input
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }
    //Output
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        } cout<<endl;
    }

    int target; 
    cin>>target;

    //fxn calling
    if(isPresent(arr, target, 3 ,4)){
        cout<<"The target is present"<<target<<endl;
    }
    else{
        cout<<"The target is not present"<<target<<endl;
    }
    return 0;
}