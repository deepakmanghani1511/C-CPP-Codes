#include<bits/stdc++.h>
using namespace std;

// Hybrid Inheritance -> It is the combination of more than one type of inheritance

// 1.
// Base class for A
class A{
    protected:
    int a;
    public:
    void get_a(){
        cout << "Enter the value of a: " << endl;
        cin >> a;
    }
};

// Derived class of B
class B: public A{
    protected:
    int b;
    public:
    void get_b(){
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }
};

// Base class for D
class C{
    protected:
    int c;
    public:
    void get_c(){
        cout << "Enter the value of c: " << endl;
        cin >> c;
    }
};

// Derived class of B and C
class D: public B, public C{
    protected:
    int d;
    public:
        void display(){

            get_a();
            get_b();
            get_c();
    
            cout << "Product of a,b and c: " << a*b*c << endl;
        }
};


// 2.
class Vehicle {
    public:
        Vehicle() {
            cout << "This is a vehicle" << endl;
        }
};

class Fare {
    public:
        Fare() {
            cout << "Fare of the vehicle" << endl;
        }
};

class Car: public Vehicle {
    
};

class Bus: public Vehicle, public Fare {

};

int main(){

    D d;
    d.display();
    
    Bus No_11;
    
    return 0;
}
