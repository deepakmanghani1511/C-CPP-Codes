#include<iostream>
using namespace std;

int main() {

    int a[5]={21,50,3,10,21};
    int size=5,ans=0;
    for(int i=0;i<size;i++){
        ans=ans^a[i];
    } 
    for(int i=1;i<size;i++){
        ans=ans^i;
    }
    cout<<ans;
    return 0;
}