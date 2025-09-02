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