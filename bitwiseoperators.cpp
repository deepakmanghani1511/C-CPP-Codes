#include<iostream>
using namespace std;


int main()
{
    int a = 4;
    int b = 5;

    cout<<" a&b "<< (a&b) << endl;
    cout<<" a|b "<< (a|b) << endl;
    cout<<" a^b "<< (a^b) << endl;
    cout<<" ~a "<< (~a) << endl;

    //Pre-increment & Post-increment ops

    //HW Ques
    //01
    int c,d=1;
    c=10;
    if(++c)
        cout<<c<<endl;
    else    
        cout<<++c<<endl;
    
    //02
    int e=1;
    int f=2;
    if(e-- >0 && ++f>2)
        cout<<"Stage 1-Inside if ";
    else
        cout<<"Stage 2-Inside else ";
    
    cout<< e <<" "<< f << endl;

    //03*
    int g=1;
    int h=2;
    if(g-- >0 || ++h>2)
        cout<<"Stage 1-Inside if ";
    else
        cout<<"Stage 2-Inside else ";
    
    cout<< g <<" "<< h << endl;

    //04
    int number = 3;
    cout << (25 * (++number)) << endl;

    //05
    int x=1;
    int y=x++;
    int z=++x;
    cout << y << endl;
    cout << z << endl;

    return 0;

}