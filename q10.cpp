//wensday 9:00
#include <iostream>
#include <vector>
#include <memory> 

using namespace std;

class Shape {
    public :
    virtual double getArea () const = 0;
    virtual ~ Shape() = default ; 
};

class Rectangle : public Shape {
    double a , b ;
    public :
    Rectangle ( double width , double height ) : a ( width ) , b ( height ) {}
    double getArea () const override { return a * b ; }
};

class Circle : public Shape {
    double r ;
    public :
    Circle ( double radius ) : r ( radius ) {}
    double getArea () const override { return 3.14159 * r * r ; }
};

int main () {
    vector <unique_ptr < Shape > > shapes ;
    shapes . push_back (make_unique < Rectangle >(10 , 5) ) ;
    shapes . push_back (make_unique < Circle >(3) ) ;

    for ( const auto & shape : shapes ) {
    std :: cout << " Area : " << shape -> getArea () << std :: endl ;
}
return 0;
}


/*
Q2: Compile-time (static) polymorphism
Determined at compile time.
Example: method overloading or operator overloading (C++).
Runtime (dynamic) polymorphism
Determined at runtime.
Example: method overriding.

Q3: Abstract class
Can contain both abstract methods and implemented methods.
Can have fields (state).
Used when a common base class with partial implementation is needed.

Interface (Java) / fully abstract class (C++)
In Java before Java 8, interfaces contained only abstract methods (nowadays you can also have default / static methods).
In C++, the equivalent is a class with purely virtual methods (= 0).
Used when you need to specify a contract (what methods should be there), but without a state.

When to use?
Abstract class — if you need common behavior + fields.
Interface — if you only need a contract, especially for multiple inheritance.


Q4: They define a common contract. Different classes implement/override the methods, 
and code can treat them uniformly through base references or pointers.


*/
