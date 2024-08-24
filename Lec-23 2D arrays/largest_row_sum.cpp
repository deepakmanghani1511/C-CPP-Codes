#include<iostream>
#include<limits.h>
using namespace std;

int rowSum(int arr[][5],int row, int col){
    int sum=0;
    for(int m=0;m<row;m++){
        for(int n=0;n<col;n++){
            sum+=arr[m][n];
        }
    }
    return sum;
}

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

    return rowINDEX;
    cout << "The largest Row Sum is = "<< maxi << endl;
}

int main(){

    int arr[4][5];
    //Input
    for(int row=0;row<4;row++){
        for(int col=0;col<5;col++){
            cin>>arr[row][col];
        }
    }
    //Output
    for(int row=0;row<4;row++){
        for(int col=0;col<5;col++){
            cout<<arr[row][col]<<" ";
        } cout<<endl;
    }
                //     My Approach 1

    //fxn calling
    int row1=rowSum(arr,0,5);
    int row2=rowSum(arr,1,5);
    int row3=rowSum(arr,2,5);
    int row4=rowSum(arr,3,5);
    //Finding the greatest
    if( row1>row2 && row1>row3 && row1>row4 )
        cout<<"Largest row is 1 and "<<"Index = 0"<<endl;
    else if( row2>row3 && row2>row4 )
        cout<<"Largest row is 2 and "<<"Index = 1"<<endl;
    else if( row3>row4 )
        cout<<"Largest row is 3 and "<<"Index = 2"<<endl;
    else    
        cout<<"Largest row is 4 and "<<"Index = 3"<<endl;
    


                //     My Approach 2
    int arr1[4];
    //storing values in an array through function
    for(int index=0; index<4; index++){
        arr1[index]=rowSum(arr,index,5);
    }
    //Finding max of an array
    int i=0,max=-32768;
    while(i<4){
        if(arr1[i]>max)
            max=arr1[i];
        i++;
        }
    cout<<"The largest row is = "<<i<<" having index = "<<i-1<<endl;



                        // Bhaiya Approach
    
    int ansINDEX = largestRowSum(arr,4,5);
    cout << " Max row is at index " << ansINDEX << endl;
    
    return 0;
}