// 2. Tendo como entrada de dados a altura e o sexo de uma pessoa, construa um algoritmo que calcule o peso ideal, utilizando as seguintes fórmulas: Homens: (72.7 * h) – 58 Mulheres: (62.1 * h) - 44.7

#include <stdio.h>

int main() {
  float height;
  char genre;

  printf("Type your genre (M or W): ");
        scanf("%s", &genre);
  printf("Type your height (Ex: 1.80): ");
        scanf("%f", &height);

    if(genre == 'M' || genre == 'm') {
        float ideal_weight = (72.7 * height) - 58;
        printf("You is a man and your ideal weight is: %.2fkg\n", ideal_weight);

        return ideal_weight;
    } else if (genre == 'W' || genre == 'w') {
        float ideal_weight = (62.1 * height) - 44.7;
        printf("You is a woman and your ideal weight is: %.2fkg\n", ideal_weight), "kg";

        return ideal_weight;
    } else {
      printf("Invalid genre.\n");
      printf("Please, type 'M' or 'F'.\n");
    }

    return 0;
}
