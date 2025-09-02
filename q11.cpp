#include <iostream>
#include <future>
#include <numeric> // For std :: accumulate

long long calculateSum() {
    long long sum = 0;
    for ( long long i = 1; i <= 1000000000; ++ i ) {
        sum += i ;
    }
    return sum ;
}

int main () {
    std :: cout << " Main thread : Starting calculation ..." << std :: endl ;

    // std :: async launches the task , returning a std :: future
    std :: future < long long > sumFuture = std :: async ( std :: launch :: async , calculateSum ) ;

    std :: cout << " Main thread : Waiting for result ..." << std :: endl ;

    // .get () blocks until the future has a value and returns it
    long long result = sumFuture.get();

    std :: cout << " Main thread : The calculated sum is: " << result << std :: endl ;

    return 0;
}
