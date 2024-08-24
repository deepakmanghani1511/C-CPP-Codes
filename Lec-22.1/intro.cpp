#include<iostream>
using namespace std;

/*
int length(char name[], int n){
    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    } return count;
}

void char_rev(char name[], int n){
    n=6;
    int start=0;
    int end=n-1;

    while(start<end){
        swap(name[start++],name[end--]);
    }
    for( int i=0; i<n ;i++){
        cout<<name[i];
    }    
}*/

char toLowerCase(char ch){
    if(ch >= 'a' && ch<='z')
        return ch;
    else{    
        char temp = ch + 32;
        return temp;
    }
}

int main(){

    // char name[20];

    // cout<<"Enter your name ";
    // cin>>name;

    // cout<< "Your name is ";
    // cout<< name << endl;

    // // cin stops execution for space, tab n newline/enter

    // char name1[20];
    // cin>>name1;

    // cout<<"Your name is: " << name1 << endl;

    // char namee2[20];
    // cin>>namee2;
    // namee2[3]='\0';

    // cout<<"Your name is : " << namee2 << endl;
    
    // //Without function calculating lenght of string
    // cout<<"Length of string ="<< length(name,20) << endl;;

    // int len=getlength(name);
    // //With function calculating lenght of string
    // cout<<"Lenght of string ="<<len  << endl;


    // char_rev(name,6);


    char a[20];
    cin>>a;
    int n=4;
    cout<<"Original= "<< a<<endl;

    char b[20];
    for(int x=0; x<20; x++){
        b[x]=a[x];
    }

    int i=0;
    int j=4;
    while(i<j){
        swap(b[i++],b[j--]);
    }
    bool flag=1;
    for(int m=0; m<20; m++){
        if( a[m]!=b[m] )
            {
                flag=0;
                break;
            }
    }

    if(flag)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";


    cout << " CHARACTER is " << toLowerCase('b') << endl;
    cout << " CHARACTER is " << toLowerCase('C') << endl; 











    return 0;
}

