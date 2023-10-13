/*
 * Author:
 * Date:
 * Name:
 */
class Car{
private:
    float horse_power;
public:
    float cost;
    std::string color;
    char state;//N, F
    int numberOfSeats;
    char plate[8]; // 01 777 ZZZ
    float retrieveHP() {
        return horse_power;
    };
    void updateHP(float value){
        horse_power = value*83.5;
    }
};
class Sedan:public Car{//public inheritance type, public values of Car class are public, privates are private
    int sedanAttr;
public:
    //CRUD
};
class Hatchback: public Car{
    int hatchAttr;
public:
    //CRUD
};
