#include<bits/stdc++.h>
using namespace std;

class Hero{
    int health;
    char grade;
    public:
    char level;
    void setHealth(int h) {
        health = h;
    }
    int getHealth() {
        return health;
    }    
    void setLevel(char ch) {
        level = ch;
    }
};

int main(){
    
    // Static Allocation 
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout << "Level is-> " << a.level << endl;
    cout << "Health is-> " << a.getHealth() << endl;

    // Dynamic allocation
    Hero *b = new Hero;
    b->setLevel('A');      // '(*b).' -> 'b->'
    b->setHealth(70);
    
    cout << "Level is->" << (*b).level << endl;
    cout << "Health is-> " << (*b).getHealth() << endl;


    cout << "Level is-> " << b->level << endl;
    cout << "Health is-> " << b->getHealth() << endl;
    
    return 0;
}