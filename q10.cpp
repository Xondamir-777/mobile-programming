#include <iostream>
#include <vector>
#include <memory> // For std :: unique_ptr

class Shape {
    public :
    virtual double getArea () const = 0; // Pure virtual function
    virtual ~ Shape() = default ; // Virtual destructor
};

class Rectangle : public Shape {
    double w , h ;
    public :
    Rectangle ( double width , double height ) : w ( width ) , h ( height ) {}
    double getArea () const override { return w * h ; }
};

class Circle : public Shape {
    double r ;
    public :
    Circle ( double radius ) : r ( radius ) {}
    double getArea () const override { return 3.14159 * r * r ; }
};

int main () {
    std :: vector < std :: unique_ptr < Shape > > shapes ;
    shapes . push_back ( std :: make_unique < Rectangle >(10 , 5) ) ;
    shapes . push_back ( std :: make_unique < Circle >(3) ) ;

    for ( const auto & shape : shapes ) {
    // The correct getArea () is called based on the object ’s actual type
    std :: cout << " Area : " << shape -> getArea () << std :: endl ;
}
return 0;
}
