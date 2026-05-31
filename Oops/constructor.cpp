// C++ Inline Functions
// In C++, we can declare a function as inline. This copies the function to the location of the function call in compile-time and may make the program execution faster.


#include<bits/stdc++.h>
using namespace std;

class Hero{

    int health;
    char level;

public:
    //when a constructor is defined default constructor automatically deleted 
    Hero() {
        cout<<"Constructor called"<<endl;
    }

    // copy constructor
    Hero(Hero& temp) {
        cout << "Copy constructor: " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    // parameterised constructor
    Hero(int health){
        this -> health = health;
        cout << "this -> " << this << endl;
    }

    Hero(int health, char level){
        cout << "this -> " << this << endl;
        this -> health = health;
        this -> level = level;
    }     
    
    int getHealth(){
        return health;
    }

    void print(){
        cout << level << endl;
        cout << "Level is" << level << endl;
        cout << "Health is" << health << endl;
    }

};

int main() {

    Hero S(70,'C');
    S.print();    
    // Copy constructor

        // Hero S;
        // S.setHealth(70);
        // S.setLevel('C');
    Hero R(S); /* 
                        Writing Hero R(S); is replaced by 
                        R.health = S.health;
                        R.level = S.level;
                */
    R.print();


    // object created statically
    Hero ramesh(100); 
    cout << "Address of ramesh : " << &ramesh << endl;
    ramesh.getHealth();
    ramesh.print();

    // Dynamically
    Hero *h = new Hero(11);
    h->print();
    delete h;

    Hero temp(50,'A');
    temp.print();

    return 0;
}