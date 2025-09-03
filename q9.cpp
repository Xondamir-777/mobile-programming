//wensday 9:00
#include <iostream>
#include <string>

using namespace std;

class Printable {
public:
    void print() const {
        cout << toString() << endl;
    }

protected:
    virtual string toString() const = 0;
};

class Book : public Printable {
private:
    string title;
    string author;

public:
    Book(const string& t, const string& a): title(t), author(a) {}

protected:
    string toString() const override {
        return "Book: " + title + " by " + author;
    }
};

int main() {
    Book b("Some book", "somebody");
    b.print();
    return 0;
}


/*
Q2:Mixins and interfaces with default methods allow you to add functionality to classes without imposing a rigid inheritance hierarchy.
they can be used to reuse code without duplication.

Q3:default methods are ready-made implementations that are inherited by all classes that implement the interface.

Q4: Inheritance: simple, but rigid and can lead to deep hierarchies.
Composition: more flexible, promotes “has-a” relationships.
Mixins/interfaces: add reusable behavior across unrelated classes, 
but can introduce complexity or conflicts if overused.





*/
