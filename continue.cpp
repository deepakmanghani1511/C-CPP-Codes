#include<iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=1; i<=n; i++)
    {
        cout<<"Hi"<<endl;
        cout<<"Hey"<<endl;
        continue;       //the part after continue is unreachable
        cout<<"Reply toh krde";
    }
    return 0;
}