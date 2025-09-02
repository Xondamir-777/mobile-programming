#include <iostream>
#include <string>

// A base class that must be implemented by anything that wants to be printable
class IStringable {
    public :
    virtual std :: string toString () const = 0;
    virtual ~ IStringable() = default ;

};

// " Mixin " class that provides functionality to any IStringable
class Printable {
    public :
    void print ( const IStringable & obj ) {
        std :: cout << obj . toString () << std :: endl ;
    }
};

// Book must implement the IStringable contract
class Book : public IStringable {
    private :
    std :: string title ;
    std :: string author ;
    public :
    Book ( std :: string t , std :: string a ) : title ( t ) , author ( a ) {}
    std :: string toString () const override {
    return "’" + title + "’ by " + author ;
}
};

int main () {
    Book myBook (" The Hobbit ", "J.R.R. Tolkien ") ;
    Printable p ;
    p . print ( myBook ) ; // Use the printable functionality on the book
    return 0;
}