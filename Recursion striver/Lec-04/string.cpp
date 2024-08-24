#include<bits/stdc++.h>
using namespace std;

void f(string& s,int index, int size){
    if(index >= size/2)
        return;
    swap(s[index],s[(size-1)-index]);
    f(s,++index,s.length());
}

int main(){

    string s="123@456";
    for(int i=0;i<s.length();i++)
        cout << s[i];
    f(s,0,7);
    cout << endl;
    for(int i=0;i<s.length();i++)
        cout << s[i];
    return 0;
}