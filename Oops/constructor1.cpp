#include<bits/stdc++.h>
using namespace std;

class smartphone{
    public:
    string model;
    private:
    int year_of_manufacture;
    public:
    bool _5g_supported;

    public:
    //default constructor
    smartphone(){
        model="unknown";
        year_of_manufacture = 0;
        _5g_supported = false;
    }
    //parametrised constructor
    smartphone(string model_string, int manufacture, bool _5g_){
        model = model_string;
        year_of_manufacture = manufacture;
        _5g_supported = _5g_;
    }
    //copy constructor
    smartphone(smartphone &obj){
        model = obj.model;
        year_of_manufacture = obj.year_of_manufacture;
        _5g_supported = obj._5g_supported;
    }

};

int main(){

    // using default constructor
    smartphone unknown;

    // using parametrised constructor
    smartphone iphone("iphone 13 ", 2019, false);

    // using copy constructor
    smartphone iphone_2(iphone);

    cout << "Model of the first phone is " << unknown.model << endl;
    cout << "Model of the second phone is " << iphone.model << endl;
    cout << "Model of the third phone is " << iphone_2.model << endl;

    // year_of_manufacture is private we can't access it

    // cout << "year of manufacture of the first phone is " << unknown.year_of_manufacture << endl;
    // cout << "year of manufacture of the second phone is " << iphone.year_of_manufacture << endl;
    // cout << "year of manufacture of the third phone is " << iphone_2.year_of_manufacture << endl;

    cout << "Is first phone 5G supported " << unknown._5g_supported << endl;
    cout << "Is second phone 5G supported " << iphone._5g_supported << endl;
    cout << "Is third phone 5G supported " << iphone_2._5g_supported << endl;

    return 0;

}