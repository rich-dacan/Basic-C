// 3. Crie um algoritmo que leia quatro valores digitados pelo usuário: n, a, b, c. a) Se n = 1 imprimir os três valores a, b, c em ordem crescente. b) Se n = 2 escrever os três valores a, b, c em ordem decrescente. c) Se n = 3 escrever os três valores a, b, c de forma que o maior fique no meio

#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

void renderInterface(int* n, int* a, int* b, int* c) {
  printf("Type a command (1 - 3): ");
  scanf("%d", n);

  printf("Type a first number: ");
  scanf("%d", a);

  printf("Type a second number: ");
  scanf("%d", b);

  printf("Type a third number: ");
  scanf("%d", c);
}


int main() {
  int n, a, b, c, numbers[3];

  renderInterface(&n, &a, &b, &c);

  switch (n) {
    case 1:
      numbers[0] = a;
      numbers[1] = b;
      numbers[2] = c;
      qsort(numbers, 3, sizeof(int), compare);

      printf("Crescent order: %d, %d, %d\n", numbers[0], numbers[1], numbers[2]);

      break;

    case 2:
      numbers[0] = a;
      numbers[1] = b;
      numbers[2] = c;
      qsort(numbers, 3, sizeof(int), compare);

      printf("Decrescent order: %d, %d, %d\n", numbers[2], numbers[1], numbers[0]);

      break;

    case 3:
      numbers[0] = a;
      numbers[1] = b;
      numbers[2] = c;

      if (numbers[0] > numbers[1] && numbers[0] > numbers[2]) {
        printf("All numbers: %d, %d, %d\n", numbers[1], numbers[0], numbers[2]);

      } else if (numbers[1] == numbers[0] && numbers[1] > numbers[2]) {
        printf("All numbers: %d, %d, %d\n", numbers[0], numbers[1], numbers[2]);

      } else {
        printf("All numbers: %d, %d, %d\n", numbers[0], numbers[2], numbers[1]);
      }

      break;

    default:
      break;
  }

  return 0;
}
