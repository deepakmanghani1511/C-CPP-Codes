#include<bits/stdc++.h>
using namespace std;

/*Checking Palindrome without function*/

// int main(){
//     string s="abccba";
//     bool flag=1;
//     for(int i=0;i<s.length();i++){
//         if(s[i] != s[s.length()-1-i] && i < s.length()/2){
//             flag=0;
//             break;
//         }
//     }
//     if(flag)
//         cout<<"Palindrome"<<endl;
//     else    
//         cout<<"No palindrome"<<endl;
//     return 0;
// }



/*Checking palindrome by function*/

// bool checkPalindrome(string& s){
//     for(int i=0;i<s.length();i++){
//         if(s[i] != s[s.length()-1-i] && i < s.length()/2)
//             return 0;
//     }
//     return 1;
// }

// int main(){

//     string s="abbcbba";
//     bool ans = checkPalindrome(s);
//     if(ans)
//         cout<<"Palindrome";
//     else    
//         cout<<"Not palindrome";
    
//     return 0;
// }



/*My approach using recursion*/
bool checkPalindrome(string& s, bool& flag, int index = 0){
    if(index >= s.size()/2){
        flag = 1;
        return flag;
    }
    if(s[index] != s[(s.length()-1)-index] && index < s.length()/2){
           flag = 0;
           return flag;
        } 
    return checkPalindrome(s,flag,++index); 
}

int main(){

    string s="123321";
    bool flag=1;
    
    if( checkPalindrome(s,flag) )
        cout << "String is Palindrome" << endl;
    else
        cout << "String is not Palindrome" << endl;
    
    return 0;
}



/*Striver approach using recursion*/
// bool f(int i, string& s){
//     if(i >= s.length()/2 )
//         return true;
//     if( s[i] != s[s.length()-i-1] )
//         return false;
//     // f(++i,s);       
//     return f(++i,s);
// }

// int main(){
//     string s="abc1cba";
//     cout << f(0,s);
//     return 0;
// }