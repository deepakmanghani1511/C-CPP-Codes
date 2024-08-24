// SEARCH A 2-D MATRIX
#include<iostream>
using namespace std;


// Binary Search

    int isPresent(int a[], int n, int target){

        int start = 0;
        int end = n-1;
        int mid = start + (end - start)/2;
        
        while(start <= end){

            if( a[mid] == target )
                return mid;
            else if( a[mid] > target){
                end = mid-1;
            }
            else{
                start = mid + 1;
            }

            mid = (start + end)/2;
        }

        return -1;
    }

    int main(){

        int a[10]={1,10,23,67,74,88,90,91,100,130};
        int index = isPresent(a,10,100);

        if(index)
            cout<<"Key is found at "<< index <<endl;
        else
            cout<<"Key is not found " << endl;

        return 0;
    }




// int main(){

// int arr[3][4]={
//         {1,3,5,7},
//         {10,11,16,20},
//         {23,30,34,64}
//     };

// int brr[12];
// int i=0;
// while(i<3*4){
// for(int row=0; row<3; row++){
//     for(int col=0; col<4; col++){
//         brr[index]=arr[row][col];
//     }
// }
// }/
//     return 0;
// }

