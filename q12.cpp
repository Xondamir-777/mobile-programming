//wensday 9:00
#include <iostream>
#include <stdexcept>

using namespace std;

void processAge ( int age ) {
    if ( age < 0) {
        throw invalid_argument (" Age cannot be negative .") ;
    }
    cout << " program was executed corrctly : " << age << endl ;
}

int main () {
    int age = -10;
    try {
        cout  << age << endl ;
        processAge ( age ) ;
    }
    catch ( const invalid_argument & e ) {
        cerr << " Error : " << e . what () << endl ;
    }
    return 0;
}

/*
Q2:
try - executes code if there is error , it stops execution of code but it doesn't stop program itself.
catch - logic that has to be done if there is type of error that it has to chatch.
finally - always runs cleanup code.

C++ → no finally. Instead uses RAII → resources (files, locks, memory) are tied 
to objects that release them automatically when they go out of scope (destructor).


Q3. 
Checked - must behandled.
Unchecked - runtime errors, not enforced.
C++: doesn’t enforce this distinction. All exceptions are unchecked.

Q4.
Advantages: cleaner code, separates error logic from normal logic, propagates errors automatically.

Disadvantages: runtime overhead, harder to predict control flow, misuse can make debugging harder, not ideal for performance-critical inner loops.
*/
