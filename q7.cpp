
//wensday 9:00
#include <iostream>

#include <string>

using namespace std;

enum class Season {
    SPRING ,
    SUMMER ,
    AUTUMN ,
    WINTER
};
string recommendActivity ( Season currentSeason ) {
    switch ( currentSeason ) {
        case Season :: SPRING : return " Be ready to exams ";
        case Season :: SUMMER : return "Relax";
        case Season :: AUTUMN : return " Prepare to 1 september ";
        case Season :: WINTER : return " Be ready to exams ";
        default : return " Rest ";
    }
}

int main () {
    Season now = Season :: SUMMER ;
    cout << "Finally It ’s summer ! Time to  " << recommendActivity ( now ) << endl ;

    return 0;

}


/*
Q2: Easy to read, safety: doesn't read if text include typo


Q3:
Enums ensure only valid values can be used, making code safer and easier to read. 

Q4:
C++ scoped enums (enum class) are type-safe but limited: they hold named constants.
Java enums are more powerful: they can have fields, methods, and constructors, acting 
almost like special classes.
Old C-style enums in C++ weren’t type-safe (could mix with ints), but scoped enums fix that.

*/
