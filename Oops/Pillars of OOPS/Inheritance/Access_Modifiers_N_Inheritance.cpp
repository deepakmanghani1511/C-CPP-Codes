#include<bits/stdc++.h>
using namespace std;

// Base / Parent / Super class
class Human{
// Inheritance
    public:
    // properties
    int age;
    int height;
    int weight;

    public:
    // methods(functions)
    int getHeight(){
        return height;
    }
    
    void setWeight(int w){
        this->weight = w;
    }

};

// Derived / Child / Sub class

class Male: public Human{
// class Male: protected Human{

    public:
    string color;

    void sleep(){
        cout << "Male sleeping" << endl;
    }

};

class Female: protected Human{

    public:
    string color;

    void sleep(){
        cout << "Female Sleeping..." << endl;
    }

    int getHeight(){
        return height;
    }
};

class Female1: private Human{

    public:
    string color;

    void sleep(){
        cout << "Female Sleeping..." << endl;
    }

    int getHeight(){
        return height;
    }
};



// Base / Parent / Super class
class Human1{
// Inheritance
    protected:
    // properties
    int age;
    int height;
    int weight;

    public:
    // methods(functions)
    int getHeight(){
        return height;
    }
    
    void setWeight(int w){
        this->weight = w;
    }

};


// Derived / Child / Sub class
class Male11: public Human1{
// class Male: protected Human{

    public:
    string color;

    void sleep(){
        cout << "Male sleeping" << endl;
    }

};

class Female12: private Human1{

    public:
    string color;

    void sleep(){
        cout << "Female Sleeping..." << endl;
    }

    int getHeight(){
        return height;
    }
};

class Female13: protected Human1{

    public:
    string color;

    void sleep(){
        cout << "Female Sleeping..." << endl;
    }

    int getHeight(){
        return height;
    }
};



// Base / Parent / Super class
class human{
// Inheritance
    private:
    // properties
    int age;
    int height;
    int weight;

    public:
    // methods(functions)
    int getHeight(){
        return height;
    }
    
    void setWeight(int w){
        this->weight = w;
    }

};


// Derived / Child / Sub class
class Male_A: public human{
// class Male: protected Human{

    public:
    string color;

    void sleep(){
        cout << "Male sleeping" << endl;
    }

};

class Female_B: private human{

    public:
    string color;

    void sleep(){
        cout << "Female Sleeping..." << endl;
    }

    int getHeight(){
        return height;
    }
};

class Female_C: protected human{

    public:
    string color;

    void sleep(){
        cout << "Female Sleeping..." << endl;
    }

    int getHeight(){
        return height;
    }
};

int main() {
    // Public mode  public members
    Male object1;

    cout << object1.age << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.color << endl;  
    object1.setWeight(50);
    cout << object1.weight << endl;
    object1.sleep();


    // Protected mode  public members
    Female object2;
    cout << object2.getHeight() << endl;


    // Private mode   public members
    Female object3;
    cout << object3.getHeight() << endl;



    // Public mode   protected members
    Male11 obj1; 
    
    // Protected mode   protected members
    Female12 obj2;

    // Private mode   protected members
    Female13 obj3;



    // Public mode   private members
    Male_A obj11; 
    
    // Protected mode   private members
    Female_B obj12;

    // Private mode   private members
    Female_C obj13;

    return 0;
}