#include <stdio.h>

int printFibo(int size){
    int f0 = 0;
    int f1 = 1;
    printf("%d, ", f0);
    printf("%d, ", f1);

    if(size > 100){
        return 0;
    }

    for(int i = 2; i < size; i++){
        int a = f0 + f1;
        printf("%d\n", a);

        f0 = f1;
        f1 = a;
    }
    printf("...\n");
}

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

int main(){
    int size;
    printf("Escolha o tamanho da sequência que deseja: ");
    scanf("%d", &size);

    long long int result = fibo(size);

    printf("fib(%d) = %lld\n", size, result);

    // printFibo(size);

    return 0;
}