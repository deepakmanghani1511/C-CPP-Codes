#include<bits/stdc++.h>
using namespace std;
// 1.
class Cal{
    public:

        static int add(int a, int b){
            return a+b;
        }

        static int add(int a, int b, int c){
            return a+b+c;
        }
};

//2.
int add(int n1, int n2){
    return n1 + n2;
}

double add(double n1, double n2){
    return n1 + n2;
}

double add(int n1, double n2){
    return n1 + n2;
}

//3.
int add1(int x, int y, int z = 0, int w = 0){
    return (x + y + z + w);
}

//4.
class A{

    public:
        void sayHello() {
            cout << "Hello" << endl;
        }

        int sayHello(string name, int n){
            cout << "Hey" << endl;
            return n;
        }

        void styleHello(string name){
            cout << "Hello!!" << endl;
        }
};

int main(){

    Cal C;
    cout << C.add(10,20) << endl;
    cout << C.add(10,20,30) << endl;


    cout << add(10, 20) << endl;
    cout << add(10.5,20.4) << endl;
    cout << add1(10,20,30) << endl;
    cout << add(10,20.3) << endl;

    A obj;
    obj.sayHello();
    
    return 0;
}