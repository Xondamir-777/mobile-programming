#include <iostream>

int main () {
int a = 10;
int b = 20;

std :: cout << " Before swap : a = " << a << ", b = " << b << std :: endl ;

// Swapping using arithmetic operations . This logic works in both C++ and Java .
a = a + b ; // a becomes 30
b = a - b ; // b becomes 10 (30 - 20)
a = a - b ; // a becomes 20 (30 - 10)

std :: cout << " After swap : a = " << a << ", b = " << b << std :: endl ;

return 0;
}
