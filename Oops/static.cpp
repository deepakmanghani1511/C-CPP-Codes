#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        int x;
        static int y;   // defination  No memory allocated
};

int A::y;   // declaration  Memory allocation

int main() {

    cout << A::y << endl;
    
    A a1, a2, a3;
    
    a1.x=10;    
    a1.y=11;    
    
    a2.x=20;
    a2.y=12;

    a3.x=30;
    a3.y=13;

    cout << a1.x << " " << a1.y << endl;
    cout << a2.x << " " << a1.y << endl;
    cout << a3.x << " " << a1.y << endl;        
 
    return 0;
}