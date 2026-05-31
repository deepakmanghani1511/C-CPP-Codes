#include<bits/stdc++.h>
using namespace std;

// Hierarchical Inheritance -> One class serves as a base class for more than 01 derived class 
// 1.
    // Base class
class Animal {
    public:
        void eat(){
            cout << "Eating" << endl;
        }
};
    // Derived class
class Dog: public Animal{
    
    public: void bark(){
        cout << "Barking" << endl;
    }
};
    // Derived class
class Cat: public Animal {
    public: void meow(){
            cout << "Meowing" << endl;
        }
};


// 2.
// Base class
class Shape{
    public:
    int a;
    int b;
    void get_data(int n, int m){
        a = n;
        b = m;
    }
};

class Rectangle: public Shape{
    public:
    int rect_area(){
        int result = a*b;
        return result;
    }
};

class Triangle: public Shape{
    public:
    int triangle_area(){
        float result = 0.5*a*b;
        return result;
    }
};

int main(){

    Cat obj;
    //calling methods
    obj.eat();
    obj.meow();
    // we can't do obj.bark() since Cat class is inherited from Animal class only so 'obj' of Cat class can access features of Cat as well as inherits properties of Animal class.
    
    
    Rectangle R;
    Triangle t;
    int length, breadth, base, height;
    cin >> length >> breadth >> base >> height;
    R.get_data(base,height);
    int m = R.rect_area();
    cout << "Area of rectangle is: " << m << endl;
    t.get_data(base,height);
    float n = t.triangle_area();
    cout << "Area of triangle is: " << n << endl;
    
    return 0;
}