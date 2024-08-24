// Correct
#include<iostream>
using namespace std;

int main() 
{   
    int item = 180;  
    int a[12] = { 3,5,9,13,18,25,27,36,99,105,110,180};
    int n = 12;

//    int odd[5] = {4,6,8,9,0};

    int start = 0;
    int end = n-1;

    int mid = ( start + end )/2;

    while(1)
    { 
        if( a[mid] == item )
            break;

        else
        {
            if( a[mid] > item)
            {     
                end = mid - 1;
            }

            else 
            {     
                start = mid + 1;
            }

            mid = ( start + end )/2;

        }
    } 
    cout << "The item found at index = " << mid;

    return 0;
}