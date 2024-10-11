#include <stdio.h>
#include <stdlib.h>
#include "basics.h"

int main(){
    
    int running = 1;

    while(running){
        int firstNumber, secondNumber;
        int operation;
        printf("Escolha o primeiro número: ");
        scanf("%d", &firstNumber);

        printf("1-Somar\n2-Subtrair\n3-Multiplicar\n4-Dividir\nEscolha uma operação:");
        scanf("%d", &operation);

        printf("%d\nEscolha o segundo número: ", firstNumber);
        scanf("%d", &secondNumber);

        int result;
        switch(operation){
            case 1:
                result = sum(firstNumber, secondNumber);
                printf("O resultado é: %d\n", result);
                break;
            case 2:
                result = subtract(firstNumber, secondNumber);
                printf("O resultado é: %d\n", result);
                break;
            case 3:
                result = multiply(firstNumber, secondNumber);
                printf("O resultado é: %d\n", result);
                break;
            case 4:
                result = divide(firstNumber, secondNumber);
                printf("O resultado é: %d\n", result);
                break;
            default:
                printf("Operação inválida, tente novamente...");
        }


    }

    return 0;
}