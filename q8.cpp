#include <iostream>

// Base class ( Superclass )
class Vehicle {
    public :
     void startEngine () {
        std :: cout << " Engine has started ." << std :: endl ;
    }
};

// Derived class ( Subclass )
class Car : public Vehicle {
    public :
    void drive () {
        std :: cout << " The car is moving ." << std :: endl ;
    }
};

int main () {
    Car myCar ;
    myCar . startEngine () ; // Inherited from Vehicle
    myCar . drive () ; // Defined in Car

    return 0;

}