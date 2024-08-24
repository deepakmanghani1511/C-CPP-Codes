// Functional Recursion
#include<iostream>
using namespace std;

// int f(int n){
//     if(n==0)
//         return 0;
//     return n + f(n-1);
// }
// int main(){
//     int n;
//     cin >> n;

//     int ans = f(n);
//     cout << ans << endl;

//     return 0;
// }

// void f(int i, int n){

//     if(i > n) // if(i == n+1)
//         return;
//     f(i+1,n);
//     cout << i << endl;
// }



// int sum = 0;
// void f(int i, int n){
    
//     if(i>n)
//         return;
//     f(i+1,n);
//     sum += i;
    
// }

// int main(){

//     int n;
//     cin >> n;
 
//     f(1,n); 
//     cout << sum << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int targetSum; // The target sum of n terms

// Backtracking function to find the sum of n terms
void backtrackSum(int n, int sumSoFar, int term)
{
    // Base case: If the sumSoFar is equal to the target sum, print the result
    if (sumSoFar == targetSum)
    {
        cout << "Sum of " << n << " terms: " << sumSoFar << endl;
        return;
    }

    // Backtracking case: If the sumSoFar exceeds the target sum or we have considered all terms (1 to n),
    // backtrack and try another combination
    // if (sumSoFar > targetSum || term > n)
        // return;

    // Include the current term and explore further
    backtrackSum(n, sumSoFar + term, term + 1);

    // Exclude the current term and explore further
    // backtrackSum(n, sumSoFar, term + 1);
}

// Function to find the sum of n terms using backtracking
void findSumOfNTerms(int n)
{
    targetSum = n * (n + 1) / 2; // Sum of first n natural numbers
    backtrackSum(n, 0, 1); // Start with an empty sum, consider the first term (1)
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    findSumOfNTerms(n);

    return 0;
}
