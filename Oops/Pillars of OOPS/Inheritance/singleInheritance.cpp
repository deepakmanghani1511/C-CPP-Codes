#include<bits/stdc++.h>
using namespace std;

// Single Inheritance -> Inheritance in which derived class is inherited from only one base class only
    
// 1. 
    // Base class
    class Animal{

    public:
        int age;
        int weight;

    public:
        void speak() {
            cout << "Speaking " << endl;
        }
    };

    //Derived class
    class Dog : public Animal{
        public:
        void bark(){
            cout << "Barking" << endl;
        }
    };

// 2.
    // Base class
    class Account{
        public:
            float salary = 60000;
    };
    // Derived class
    class Programmer: public Account {
        public:
            float bonus = 5000;
    };

// 3.
    // Base class
    class A{
        int a = 4;
        int b = 5;
        public:
            int mul(){
                int c = a*b;
                return c;
            } 
    };
    // Derived class
    class B: private A{
        public:
            void display() {
                int result = mul();
                cout << "Multipication of a and b is: " << result << endl;
        }   
    };

int main() {


// 1.
    Dog d;
    d.speak();
    d.bark();
    cout << d.age << endl;
    cout << d.weight << endl;

// 2.
    Programmer p1;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;
    
// 3.
    B b;
    b.display();
    
    return 0;
}