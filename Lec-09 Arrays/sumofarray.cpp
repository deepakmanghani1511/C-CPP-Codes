#include<iostream>
using namespace std;

int Sum( int arr[], int n) {
    
    int sum=0; 
    for( int i = 0; i<n; i++) {
        sum = sum + arr[i];
    } 
    return sum;
}

int main() {

    int first[] = {10,20,3,5,66,-77,-99,-10,-200};
    int second[] = {-5,78,90,110,25,36};
    int ans1,ans2;

    ans1 = Sum(first,10);
    cout<< "The sum of first array = " << ans1 << endl;
    ans2 = Sum(second,6);
    cout<< "The sum of second array = " << ans2 << endl;

    return 0;
}