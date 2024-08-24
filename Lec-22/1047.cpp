#include<iostream>
using namespace std;

int main(){

    string s="azxxzy";

    int i=0;
    while(i<s.length()){
        if(s[i]==s[i+1] || s[i==s[i+1]])
            {
                s.erase(i,i+1+1);
                i=0;
            }
        // else if(s[i-1]==s[i]){
        //     s.erase(i-1,i+1);
    
        // }
        else
            i++;
    }
   
    cout<<s;


    return 0;
}