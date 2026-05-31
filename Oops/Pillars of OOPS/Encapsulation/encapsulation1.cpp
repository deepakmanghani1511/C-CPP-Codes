#include<bits/stdc++.h>
using namespace std;

class student{
    
    private:
        string name;
        int age=20;
        int height;
    
    public:
    int getAge(){
        cout << this->age << endl;
        return this->age;
    }
};

int main(){

    student first;
    first.getAge();
    cout << "Sbb shi chll rha h" << endl;
    return 0;
}