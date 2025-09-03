//wensday 9:00
#include <iostream>
# include <string>
# include <algorithm>

bool isPalindrome ( const std :: string & str ) {
    int l = str.length();
    for (int i=0; i<l; i++){
        if(str[i]!=str[l-1-i]){
            return 0;
        }
    }
    return 1;
}

int main () {
std :: cout << " madam is palindrome ? " << ( isPalindrome (" madam ") ? " true " : " false") << std :: endl ;
std :: cout << " hello is palindrome ? " << ( isPalindrome (" hello ") ? " true " : " false") << std :: endl ;
return 0;
}


/*
Q2:In C++, we can use Pass-by-value, Pass-by-pointer, Pass-by-reference:
Pass-by-value. The function receives a copy of the argument. Changes within the function do not affect the original variable.
Pass-by-pointer. The function receives the address of the variable. It is possible to change the contents by address.
Pass-by-reference. The function receives a reference to the variable. The changes affect the original.

In Java Always pass-by-value:
For primitives, the value itself is copied.
For objects, the address is copied, not the object itself.

Q3: Overloading is the ability to have multiple functions/methods with the same name but different parameters.
The return type of function or input parameters must be different.

Q4:Recursion is when a function calls itself to solve a problem.
Base case is condition to stop function, if there is no base case it runs untill stack overflow





*/
