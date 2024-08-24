// print counting 1 2 3 4 ...

// #include<iostream>
// using namespace std;

// int i = 1;   // global variable

// void f(int n){
//     if(i == n+1)
//         return;
//     cout << i << endl;
//     i++;
//     f(n);
// }

// int main(){

//     int n; cin >> n;
//     f(n);

//     return 0;
// }





// print counting 0 1 2 3 4 ...
// #include<bits/stdc++.h>
// using namespace std;

// int cnt=0;      //global variable
// void f(int n){
//     if(cnt == n+1)
//         return;
//     cout << cnt << endl;
//     cnt++;
//     f(n);
// }

// int main(){
    
//     int n;
//     cin >> n;
//     f(n);

//     return 0;
// }





// print counting from given no n to N
#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){

    if(i == n+1)
        return;
    cout << i << endl;
    // i++;
    // f(i,n);
    f(i+1,n);
}

int main(){
    int givenNumber, reqNumber;

    cin >> givenNumber;
    cin >> reqNumber;
    
    f(givenNumber,reqNumber);

    return 0;
}