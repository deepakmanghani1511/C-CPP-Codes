#include<bits/stdc++.h>
using namespace std;

class A{
    // public:
        int a;
        void modify_a(int x){
            a = x;
        }
};

class B{
    public:
    int b;
    void modify_b(int y){
        b = y;
    }
};

class C{
    public:
        int c;
        void setData(int z){
            c = z;
        }
        void getData(){
            cout << "The value of c is " << c << endl;
        }
};

class D{
    int d;
    public:
        void setData(int w){
            d = w;
        }
        void getData(){
            cout << "The value of c is " << d << endl;
        }
};

int main(){

    A a;
    // a.modify_a(10);
    // cout << a.a << endl;

    B b;
    b.modify_b(10);
    cout << b.b << endl;

    C c;
    c.setData(4);
    c.getData();

    return 0;
}