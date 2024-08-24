#include<iostream>
using namespace std;
                //  Print like a sine wave
// CodeStudio



// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {

//     vector<int> ans;

//     for(int col=0;col<mCols;col++){
        
//         if( col%2!=0 ){
//             //odd -> bottom to top
//             for(int row=nRows-1;row>=0;row--){
//                 //cout<<arr[row][col]<<" ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else{
//             // even -> top to bottom 
//             for(int row=0;row<nRows;row++){
//                 //cout<<arr[row][col]<<" ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }

//     return ans;
// }// #include <bits/stdc++.h> 
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {

//     vector<int> ans;

//     for(int col=0;col<mCols;col++){
        
//         if( col%2!=0 ){
//             //odd -> bottom to top
//             for(int row=nRows-1;row>=0;row--){
//                 //cout<<arr[row][col]<<" ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else{
//             // even -> top to bottom 
//             for(int row=0;row<nRows;row++){
//                 //cout<<arr[row][col]<<" ";
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }

//     return ans;
// }



        // Time Complexcity = O(mn)
// we are traversing each element i.e. is m*n


int main(){
    
    int ARR[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // 1 2 3
    // 4 5 6
    // 7 8 9
    for(int col=0;col<3;col++){
        if( col%2 == 0){
            for(int row=0;row<3;row++){
                cout<<ARR[row][col]<<" ";
            }
        }
        else{
            for(int row=3-1;row>=0;row--){
                cout<<ARR[row][col]<<" ";
            }
        }
    }
    return 0;
}


