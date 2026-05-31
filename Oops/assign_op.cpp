#include<bits/stdc++.h>
using namespace std;

class laptop{

    int price;
    char category;

    public:
        laptop(int price, char category){
            this -> price = price;
            this -> category = category;
            cout << "Price :" << price << " " << "Category :" << category << endl;
        }

        void print(){
            cout << "Price :" << price << " " << "Category :" << category << endl;
        }
};

int main(){

    laptop mac(100000,'A');
    laptop hp(75000,'B');
    
    // ASSISGNMENT OP
    cout << "Using assisgnment op" << endl;
    hp = mac;

    mac.print();
    hp.print();

    return 0;
}