#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[5][5]={
        {1,2,3,4,5},
        {2,3,4,5,6},
        {3,4,5,6,7},
        {4,5,6,7,8}, 
        {5,6,7,8,9}
        };

    for(int col=0;col<5;col++){
        // for(int row=0;row=5;row++)  
            if(col&1){
                for(int row=5-1; row>=0; row--){
                    cout<<arr[row][col]<<" ";
                }
            }
            else{
                for(int row=0; row<5; row++){
                    cout<<arr[row][col]<<" ";
                }
            }
    }

    return 0;
}