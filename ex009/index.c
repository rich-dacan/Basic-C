// 9. Faça um algoritmo para ler o código e o preço de 15 produtos, calcular e escrever: - o maior preço lido - a média aritmética dos preços dos produtos

#include <stdio.h>


int main() {
  int product_id, i;
  float price, highest_price = 0, sum = 0, average;

  for (i = 0; i < 15; i++) {
    printf("Type id of the product: ");
    scanf("%d", &product_id);

    printf("Type the price of the product: ");
    scanf("%f", &price);

    if (price > highest_price) {
      highest_price = price;
    }

    sum += price;
  }

  average = sum / 15;

  printf("The highest price is: %.2f $$$\n", highest_price);
  printf("The average price is: %.2f $$$\n", average);

  return 0;
}
