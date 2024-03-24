// 1. Faça um algoritmo que encontre qual o maior número par digitado pelo usuário. O usuário deve digitar 50 números e ao final o algoritmo deve imprimir o resultado.

// Build and run on terminal: gcc <file_name>.c -o  <file_name> and ./<file_name>

#include <stdio.h>

int main() {
    int i, num, biggest_even = -1;

    for(i = 0; i < 50; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &num);

        if(num % 2 == 0 && num > biggest_even) {
            biggest_even = num;
        }
    }

    if(biggest_even != -1) {
        printf("O maior número par digitado foi: %d\n", biggest_even);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    return 0;
}
