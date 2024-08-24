#include<iostream>
using namespace std;

string isEven(int n) {
    if(n&1)
      return "Odd number";
    else
        return"Even number";  
}

int main() {
    int n1=3,n2=4,n3=5;
    isEven(n1);
    isEven(n2);
    isEven(n3);

    return 0; 

}