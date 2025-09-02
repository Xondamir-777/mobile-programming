#include <iostream>
# include <string>
# include <algorithm> // For std :: equal

bool isPalindrome ( const std :: string & str ) {
// An elegant way is to compare the first half with the reverse of the second half .
return std :: equal ( str . begin () , str . begin () + str . size () /2 , str . rbegin () ) ;
}

int main () {
std :: cout << " madam is palindrome ? " << ( isPalindrome (" madam ") ? " true " : " false") << std :: endl ;
std :: cout << " hello is palindrome ? " << ( isPalindrome (" hello ") ? " true " : " false") << std :: endl ;
return 0;
}
