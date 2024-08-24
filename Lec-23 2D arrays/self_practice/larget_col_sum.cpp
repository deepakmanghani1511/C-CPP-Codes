#include<bits/stdc++.h>
using namespace std;

int colSum(int a[][3], int mRow, int nCol){
    
    int max = INT_MIN;
    int COLINDEX = -1;
    for(int n = 0; n < nCol; n++) {
        int sum=0;
        for(int m=0; m < mRow; m++){
            sum += a[m][n];
        }
        if(sum > max){
            max = sum;
            COLINDEX = n;
        }
    }

    cout << "The largest column is = " << max << endl;
    
    return COLINDEX;
}

int main(){

    int arr[3][3] =
    {
        {1,2,3},
        {2,4,6},
        {3,6,9}
    
    };
    
    int index = colSum(arr,3,3);

    cout << "Largest row index at = " << index << endl;    
    
    return 0;
}