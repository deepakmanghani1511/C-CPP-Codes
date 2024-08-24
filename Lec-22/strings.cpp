#include<iostream>

using namespace std;

int main(){

    // string s1="My name is KHAN";
    // cout<<s1.length()<<endl;

    // string s2="";

    // for(int i=1; i<=s1.length(); i++){
    //     if(s1[i] == '')
    //         s2[i]=40;

    //     else{
    //         s2[i]=s1[i];
    //     }
    // }

    // cout<<s1<<endl;
    // cout<<s2<<endl;
    string s="daabcbaabcbc";
    string part="abc";
    cout<<s.find(part)<<endl;
    s.erase(s.find(part), part.length());
    
    string s1="abcdea";
    string s2="ea";
    cout<<s1.find(s2)+s2.length();
    
    
    return 0;
}