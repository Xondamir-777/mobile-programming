//Monday 14:00
#include <iostream>
#include <stdexcept> // For std :: invalid_argument

void processAge ( int age ) {
    if ( age < 0) {
        throw std :: invalid_argument (" Age cannot be negative .") ;
    }
    std :: cout << " Age processed successfully : " << age << std :: endl ;
}

int main () {
    int userAge = -5;
    try {
        std :: cout << " Processing age: " << userAge << std :: endl ;
        processAge ( userAge ) ;
    }
    catch ( const std :: invalid_argument & e ) {
        // Catches the specific exception type
        std :: cerr << " Error : " << e . what () << std :: endl ;
    }

    std :: cout << " Program continues ." << std :: endl ;
    return 0;
}

/*
Q2:
try → wraps code that may throw.

catch → handles the exception.

finally (Java) → always runs cleanup code.

C++ → no finally. Instead uses RAII → resources (files, locks, memory) are tied 
to objects that release them automatically when they go out of scope (destructor).


Q3. 
Checked → must be declared/handled (e.g. IOException).
Unchecked → runtime errors, not enforced (e.g. NullPointerException).
C++ → doesn’t enforce this distinction. All exceptions are unchecked.

Q4.
Advantages: cleaner code (no scattered error checks), separates error logic from 
normal logic, propagates errors automatically.

Disadvantages: runtime overhead, harder to predict control flow, misuse can make 
debugging harder, not ideal for performance-critical inner loops.
*/