#include<iostream>
using namespace std;

int main(){

    int arr[3][4];
    int brr[3][4];

    //Row wise Input
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }

    //Col wise Input
    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
            cin>>brr[col][row];
        }
    }


    //Output
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        } cout<<endl;
    }
    
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<brr[row][col]<<" ";
        } cout<<endl;
    }



    //Initilization

    // int arr1[3][4]={{1,11,111,1111},{2,22,222,2222}};

    // for(int row=0;row<2;row++){
    //     for(int col=0;col<3;col++){
    //         cin>>arr1[row][col];
    //     } cout<<endl;
    // }

    // for(int row=0;row<2;row++){
    //     for(int col=0;col<3;col++){
    //         cout<<arr1[2][3]<<" ";
    //     } cout<<endl;
    // }


    return 0;
}