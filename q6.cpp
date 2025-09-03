//wensday 9:00
#include <iostream>

class BankAccount {
    private :
    double balance ;
    public :
    BankAccount ( double initialBalance ) {
        if ( initialBalance >= 0) {
            balance = initialBalance ;
        } else {
            balance = 0;
        }
    }
    
    void deposit ( double amount ) {
        if ( amount > 0) {
            balance += amount ;
        }
    }
    
    double getBalance () {
        return balance ;
    }
};

int main () {
    BankAccount myAccount (100.50) ;
    std :: cout << " Initial balance : " << myAccount . getBalance () << std :: endl ;

    myAccount . deposit (50.25) ;
    std :: cout << " Balance after deposit : " << myAccount . getBalance () << std :: endl ;

    return 0;

}



/*
Q2: Class is drawing. Object is finished product.

Q3: public: A class member is accessible from anywhere .
private: A class member is accessible only within the class itself.
protected: A class member is accessible within the class itself, its subclasses.

Q4: Constructor: A special class method that is called when an object is created.
Default constructor: This is a constructor without parameters.
If the programmer has not written any constructors, the compiler automatically adds one.
But if you have defined at least one of your own constructors, the default constructor is not automatically created.
*/
