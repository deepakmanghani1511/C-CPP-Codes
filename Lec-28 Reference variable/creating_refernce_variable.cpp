#include<iostream>
using namespace std;

int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}

void update1(int n){
    n++;
}

void update2(int& n){
    n++;
}

int main(){

    int i=5;
    
    // create a ref variable

    
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;

    int n = 7;
    // without refernce variable
    cout <<"Before " << n << endl;
    update1(n);
    cout <<"After " << n << endl;
    
    
    // uses refernce variable
    cout <<"Before " << n << endl;
    update2(n);
    cout <<"After " << n << endl;

    return 0;
}