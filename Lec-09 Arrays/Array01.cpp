#include<iostream>
using namespace std;

void printarray( int arr[], int size)       // don't fix the size in calling
{
    for( int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< endl;
}


int main() {

    //declaration
    int number[15];

    //accessing an array
    cout << "Value at 14 index " << number[14] << endl;


    //Initialising an array

    int second[3] = {5,7,13};

    //accessing an element
    cout<< "Value at 2 index " << second[2] << endl;




    int third[15] = {2,7};

    int n = 15;
    cout << "Printing the array " << endl;
    //Print the array
    for( int i = 0 ; i<n; i++) 
    {
        cout << third[i] << " ";
    }
    cout<<endl;


    //Initialising all locations with zero 
    int fourth[10] = {0};
    
    n = 10;
    cout<< " Printing the array " << endl;
    //print the array
    for( int i=0; i<n; i++)
    {
        cout<< fourth[i] << " ";
    }
    cout<<endl;


    //Initialising all locations with zero
    int fifth[10] = {1};
    
    n = 10;
    cout<< " Printing the array " << endl;
    //print the array
    for( int i=0; i<n; i++)
    {
        cout<< fifth[i] << " ";
    }
    cout<< endl << endl;


    int a[5];
    int N = 5;

    for( int i=0; i<N; i++)
    {
        cout << a[i] << " ";    // All values are garbage
    }
    cout<< endl;


    int b[10] = {1};
    int n1 = 10;

    for( int i = 0; i<n1; i++)
    {
        cout << b[i] << " ";    // First element is 1 rest are garbage
    }
    cout<<endl;


    int c[10] = { 2,3,7 };
    int n2 = 10;

    for( int i = 0; i<n2; i++) 
    {
        cout << c[i] << " ";    // First three elements are 2 3 7 rest has garbage values because onlt 03 values are assisgned and rest taken by compiler
    }
    cout<<endl;


    int d[10] = {0};
    int n3 = 10;

    for( int i=0; i<n3; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl << endl << endl << endl;
    



    //Printing array elements Using function
    int arr1[20] = {1,2,3,4,5,6,7,8,9,10};
    int size1 = 20;

    int arr2[20] = {0};
    int size2 = 20;
    
    int arr3[20] = {1};
    int size3 = 20; 
    
    int arr4[20];
    int size4 = 20;

    // Always use variable for size, don't mention the constant size
    printarray( arr1, size1);
    printarray( arr2, size2);
    printarray( arr3, size3);
    printarray( arr4, size4);
    



    // Different types of arrays
    double firstdouble[5];
    float firstfloat[6];
    bool firstbool[9];
    char ch[5] = { 'a', 'b', 'c', 'd', 'e'};
    for( int i = 0; i<5; i++)
    {
        cout << ch[i] << " ";
    }
    cout<< endl;

    return 0;
}
