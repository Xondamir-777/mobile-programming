//wensday 9:00
#include <iostream>
#include <future>
#include <numeric>

using namespace std;

long long calculateSum() {
    long long sum = 0;
    for ( long long i = 1; i <= 1000000000; ++ i ) {
        sum += i ;
    }
    return sum ;
}

int main () {
    future < long long > s = async(launch :: async , calculateSum ) ;

    cout << " Main thread : Waiting for result ..." << endl ;

    long long result = s.get();

    cout << " Main thread : The calculated sum is: " << result << endl ;

    return 0;
}


/*
Q2: Asynchronous programming solves the problem of threads blocking during long I/O operations — for example:
network requests, file reading/writing, database queries.
Without asynchrony: the thread waits for the operation to complete.
With asynchrony: the thread can continue performing other tasks until the I/O operation completes.


Q3:
Concurrent execution (concurrency)
Several tasks are executed alternately, logically in parallel, but not necessarily physically simultaneously.
Usually one or more threads that switch between tasks.
Example: multitasking in an OS.
Parallel execution (parallelism)
Several tasks are executed physically simultaneously on different processors or cores.
Example: calculating a matrix on several CPU or GPU cores at once.
Concurrency ≠ parallelism. Concurrency is about the program structure, parallelism is about the actual execution.

Q4: A Future represents a placeholder for a value that will be available later.
A Promise is the producer that sets that value.
In Java, Future/CompletableFuture manages async results.
In C++, std::future and std::promise do the same, letting you get results or handle errors from async tasks.


*/
