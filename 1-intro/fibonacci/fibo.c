#include <stdio.h>

long long int fibo(int n){
    int i;
    long long int fibn, fib1, fib2;

    if(n < 0) return -1;
    if(n == 0) return 0;
    if(n == 1) return 1;

    fibn = 0;
    fib2 = 0;
    fib1 = 1;

    for(int i = 2; i <= n; i++){
        fibn = fib1 + fib2;
        fib2 = fib1;
        fib1 = fibn;
    }

    return fibn;
}