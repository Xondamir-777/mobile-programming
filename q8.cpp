//wensday 9:00
#include <iostream>

using namespace std;


class Vehicle {
    public :
    void startEngine () {
        cout << " Engine is working! " << endl ;
    }
};


class Car : public Vehicle {
    public :
    void drive () {
        cout << " Let's go!" << endl ;
    }
};

int main () {
    Car myCar ;
    myCar . startEngine () ;
    myCar . drive () ; 

    return 0;

}


/*
Q2: is-a → inheritance, used for generalization or specialization.
has-a → composition, used for composite objects.

Q3:
A derived class provides its own version of a method from the base class.
In C++, virtual in base and override in derived make overriding explicit.
In Java, @Override ensures the method truly overrides.

Q4: It happens when a class inherits from two classes that share the same base, causing ambiguity.
C++ fixes it with virtual inheritance.
Java avoids it because classes can’t have multiple inheritance, only multiple interfaces.

*/
