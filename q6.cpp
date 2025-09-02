#include <iostream>

class BankAccount {
    private :
    double balance ;
    public :
    // Constructor to initialize the balance
    BankAccount ( double initialBalance ) {
        if ( initialBalance >= 0) {
            balance = initialBalance ;
        } else {
            balance = 0;
        }
    }
    
    // Method to add money to the account
    void deposit ( double amount ) {
        if ( amount > 0) {
            balance += amount ;
        }
    }
    
    // Method to view the current balance
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