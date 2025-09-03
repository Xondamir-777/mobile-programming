//wensday 9:00
#include <iostream>

using namespace std;

int main ( int argc , char * argv []) {
    cout << " Number of arguments received : " << argc << endl ;
    cout << " Arguments are:" << endl ;
    for ( int i = 0; i < argc ; ++ i ) {
        cout << " Argument " << i << ": " << argv [ i ] << endl ;
    }
    return 0;
}
/*
Q2: The primary purpose of main is to serve as the starting point of execution for a Java program.
It is declared static so the JVM can call it without creating an object of the class.

Q3: In C++ main returns code of status.
In Java main is void function so it doesn't return anything

Q4: In C++ main returns code of status 0 if there is no problem or non-zero value if there is problem.
In Java to get non-zero exit status we use System.exit(int)
*/
