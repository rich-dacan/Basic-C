// 11. Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da turma e o resultado da contagem.

#include <stdio.h>

int main() {
  int i, count = 0;
  float notes[20], sum = 0, average;

  for (i = 0; i < 20; i++) {
    printf("Type the note of the %dº student: ", i+1);
    scanf("%f", &notes[i]);

    sum += notes[i];
  }

  average = sum / 20;

  for (i = 0; i < 20; i++) {
    if (notes[i] > average) {
      count++;
    }
  }

  printf("The class average is: %.2f\n", average);
  printf("The number of students with note above average is: %d\n", count);

  return 0;
}
