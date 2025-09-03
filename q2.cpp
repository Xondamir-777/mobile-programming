//wensday 9:00
#include <iostream>

int main () {
int a = 25;
int b = 50;


a = a + b ;
b = a - b ;
a = a - b ;

std :: cout << " a = " << a << ", b = " << b << std :: endl ;

return 0;
}

/*
Q2: Primitive types store a fixed amount of memory at a fixed address, while reference types store an address for primitive type data, a data set, or structured data.

Q3: Scope is part of the program where variable can be used.
Local scope. Variables that was created inside a functon and can  be used inside this function.
class-level/static. Variables that declared inside a class but outside methods. they can be used only inside this class but methods and functions of class also can use them

Q4: The type of a variable is determined at compile time. The compiler checks the correctness of the types before the program is run.
The type of a variable is determined during program execution. The same variable can store data of different types.
*/
