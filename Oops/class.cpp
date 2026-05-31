#include<iostream>
using namespace std;

// Class defined
class Hero{
    
    //properties by default private
    int health;
    char level;

};


// An empty class
class empty{
    
    //No properties

};


// Access Modifiers
class school{
    //properties
    // private:
        int age;
        char grade;
        int rollno;
    
    public:
    void print(){
        cout << age << endl;
        cout << grade << endl;
        cout << rollno << endl;
    }    
    // getter
    int getAge(){
        return age;
    }
    // getter
    char getGrade(){
        return grade;
    }
    // getter
    int getRollno(){
        return rollno;
    }
    //setter
    int setAge(){
        return 100;
    }
    //setter
    char setGrade(){
        return 'A';
    }
    //setter
    int setRollno(){
        return 222;
    }    
};



int main() {

    // Obj created(static allocation)
    Hero ramesh;
    cout << "Size: " << sizeof(ramesh) << endl;

    //Empty clas obj created
    empty a;
    cout << "Size: " << sizeof(a) << endl;      // 01 byte

    // Access Modifiers
    //Obj created
    school student;

    //public:
    // student.age=12;
    // student.grade='A';
    // student.rollno=500;

    // cout << student.age() << endl;
    // cout << student.grade() << endl;
    // cout << student.rollno() << endl;

    cout << student.getAge() << endl;
    cout << student.getGrade() << endl;
    cout << student.getRollno() << endl;
    
    // setter
    // student.sethealth(100);
    // student.setgrade('A');
    // student.setRollno(222);    
    
    cout << student.setAge() << endl;
    cout << student.setGrade() << endl;
    cout << student.setRollno() << endl;


    return 0;
}