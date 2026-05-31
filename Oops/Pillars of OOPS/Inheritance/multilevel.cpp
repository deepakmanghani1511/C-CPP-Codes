#include<bits/stdc++.h>
using namespace std;

// Multilevel Inheritance -> In Multilevel Inheritance, the derived class inherited from the base class and the derived class becomes the base class for the new class
class Animal{
    public:
        void eat(){
            cout << "Eating..." << endl;
        }      
};

class Dog: public Animal{
    public:
        void bark(){
            cout << "Speaking..." << endl;
        }
};

class GermanSheperd: public Dog{
    public:
        void speciality(){
            cout << "Known for its courage, loyalty and guarding instincts" << endl;
        }
};

class BabyGermanSheperd: public GermanSheperd{
    private:
        void weap(){
            cout << "Weeping..." << endl;
        }
    public:
        void getWeap(){
            weap();
        }
};

int main(){

    // Object created statically
    BabyGermanSheperd sheru;
    sheru.eat();   // Eating...
    sheru.bark();     // Speaking...
    sheru.speciality();      // Known for its courage,...
    
    sheru.getWeap();

    return 0;
}