#include <stdio.h>
#define MAX_TEST 10

long long int fibo( long long int );

int main(){
    int i;

    for(int i = -1; i <= MAX_TEST; i++){
        printf("i: %2d\t  fib(%2d):   %2lld\n", i, i, fibo(i));
    }

    return 0;
}