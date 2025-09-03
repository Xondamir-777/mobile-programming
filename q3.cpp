//wensday 9:00
#include <iostream>

int main () {
int n1 = 0 , n2 = 1 , nextTerm = 0;

std :: cout << " First 10 Fibonacci numbers : ";

for ( int i = 1; i <= 10; ++ i ) {
if( i == 1) {
std :: cout << n1 << " ";
continue ;
}
if( i == 2) {
std :: cout << n2 << " ";
continue ;
}
nextTerm = n1 + n2 ;
n1 = n2 ;
n2 = nextTerm ;

std :: cout << nextTerm << " ";
}
std :: cout << std :: endl ;

return 0;
}


/*
Q2: While is executed if it is true else it is not executed. 
Do-while is executed once then it checks condition
While is usefull if loop must be done or must not be done.
However Do-whileis usefull if there is part of the code that has to be done once even if condition is false

Q3: Switch is analogue of a lot of if statements that check only one variable.
case label case(value) is analogue of if(variable == value), but it works only inside of switch.
break label is used to exit switch.
default label is executed if case labels were not executed

Q4: For logical AND (&&) .If the left expression is false, then the whole expression will definitely be false. So the right side is not even saved.
For logical OR (||). If the left expression is true, then the whole expression will definitely be true. The right side is not evaluated.
Optimization - we don't waste resources on calculating unnecessary expressions.


*/
