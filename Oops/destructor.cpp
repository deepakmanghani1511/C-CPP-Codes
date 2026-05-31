#include<bits/stdc++.h>
using namespace std;

class subject{
    public:
    // constructor
    // subject() {

    // }

    // destructor
    ~subject(){
        cout << "Subject object is destroyed" << endl;
    }

};

int main() {

    // static
    subject physics;
    subject chemistry;

    // dynamic
    subject *maths = new subject();
    subject *English = new subject();

    delete maths;
    delete English;

    return 0;
}