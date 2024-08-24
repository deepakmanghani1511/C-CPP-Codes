// Maximum and minimum of an array

     // Ghatiya pratice because the size of array is not need to be variable

         // int size = 20;
        // int array[size];

#include<iostream>
using namespace std;

void getMax( int numb[] , int n )
{
    int  max = -32768;
    for( int i = 0; i<n; i++)
    {
        // 2 20 45 30 50 -10 
        if( numb[i] > max)
            max = numb[i];    
    }
    cout << "Maximum element of an array = " << max <<endl;
}

void getMin( int num[], int size )
{
    int Min = 32767;
    for( int i = 0; i<size; i++)
    {
       // -30 2 -40 80 10 -50 -100 90
        if( num[i] < Min )
            Min =  num[i];
    }

    cout<< "Minimum element of an array = " << Min <<endl;
}

int getmax( int first[], int n)
{
    int maxi;

    for(int i = 0; i<n; i++)
    {
        maxi = max( maxi, first[i]); 
    }
    
    return maxi;
}

int getmin( int first[], int n)
{
    int mini;
    
    for( int i = 0; i<n; i++)
    {
        mini = min( mini, first[i]);
    }

    return mini;
}

int main() {

    int size = 100;
    int num[100];
  
    //Input of an array
/*    for( int i=0; i<size; i++) {

        cin >> num[i];

    }
*/
    int numb[100] = { 2, 20, 45,30, 50, -10};
    int numb2[100] = { -30 ,2 ,-40,80,10,-50, -100, 90};
    getMax( numb, size);
    getMin( numb2, size);
    

    int n = 100;
    int first[100] = { 10,25,-30,420,500 };

    int maxi, mini;
    maxi = getmax(first, n);
    mini = getmin(first, n);
    
    cout<<"Maximum element of an array using pre-build function = " << maxi <<endl;
    cout<<"Minimum element of an array using pre-build function = " << mini <<endl;

    return 0;
}