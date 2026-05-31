#include<iostream>
using namespace std;

// By default all the properties of the classes are private
class Hero{
    public:
    // properties
        int health;
        int power;
        char ability;
        int level;  
        char name;  
        char sex;
};

class Animal{
    
    public:
    // properties
    bool gives_birth;
    bool lay_eggs;
    bool live_in_ground;
    bool live_in_water;
    bool have_wings;
    // bool herbivores;
    // bool carnivores;
    // bool omnivores;
    // bool common;
    // bool rare;
    // bool extinct;

};

class television{

    //properties
    float screen_width;
    float screen_height;
    char screen_shape;

    // functions
        // On Off Switch
        // Volume Control
        // Tuner

};
class vehicle{

    // properities
    bool runs_on_ground;
    bool for_fly;
    bool in_water;
    bool use_as_public_transport;
    bool use_for_goods;
    bool expensive;
    bool electric;
    bool petrol;
    bool disel;

    public:
    string fuel;

};

int main() {
    
    //Hero class
    Hero Paul;
    Hero Tiger;
    Paul.health=100;
    Paul.power=120;
    Paul.ability="Dance";
    Paul.level=3;
    Paul.sex='M';

    Tiger.health=100;
    Tiger.ability="High Jump";
    Tiger.level=3;
    Tiger.power=180;
    Tiger.sex='M';

    cout << Paul.health << endl;
    cout << Paul.power << endl;
    cout << Paul.ability<<endl ;
    cout << "Level of the hero is : "<<Paul.level<<" and Sex :"
    <<Paul.sex<<"."<<endl;

    // television class
    television Silver_Magic;
    television Wooden_Classic;

    //Animal class
    Animal Mammals;
    Animal Birds;
    Animal Amphibians;
    Animal Reptiles;
    Animal Insects;


    // vehicle class
    vehicle car;
    vehicle bike;
    vehicle rickshaw;
    vehicle van;
    vehicle aeroplane;
    vehicle ship;
    vehicle bus;
    vehicle train;
    vehicle truck;
    vehicle submarine;
    vehicle jet;

    return 0;
}