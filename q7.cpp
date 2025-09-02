#include <iostream>

#include <string>

enum class Season {
    SPRING ,
    SUMMER ,
    AUTUMN ,
    WINTER
};
std :: string recommendActivity ( Season currentSeason ) {
    switch ( currentSeason ) {
        case Season :: SPRING : return " Plant flowers ";
        case Season :: SUMMER : return "Go to the beach ";
        case Season :: AUTUMN : return " Rake leaves ";
        case Season :: WINTER : return " Build a snowman ";
        default : return " Rest ";
    }
}

int main () {
    Season now = Season :: AUTUMN ;
    std :: cout << "It ’s autumn ! Let ’s: " << recommendActivity ( now ) << std :: endl ;

    return 0;

}