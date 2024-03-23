// 4. Um posto está vendendo combustíveis com a seguinte tabela de descontos: Álcool: até 20 litros, desconto de 3% por litro e acima de 20 litros, desconto de 5% por litro; Gasolina: até 20 litros, desconto de 4% por litro e acima de 20 litros, desconto de 6% por litro. Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (A-álcool, G-gasolina) e imprima o valor a ser pago pelo cliente. Considere que o preço

#include <stdio.h>

int main() {
  int discount;
  int liters;
  char fuel_type;

  printf("Type the fuel type (A - Alcohol, G - Gasoline): ");
  scanf("%s", &fuel_type);

  printf("Type the liters qtd: ");
  scanf("%d", &liters);

  if (fuel_type == 'A' || fuel_type == 'a') {
    if (liters <= 20) {
      discount = 3;
    } else {
      discount = 5;
    }
  } else if (fuel_type == 'G' || fuel_type == 'g') {
    if (liters <= 20) {
      discount = 4;
    } else {
      discount = 6;
    }
  } else {
    printf("Invalid fuel type.\n");
    printf("Please, type 'A' or 'G'.\n");
  }


  printf("Total: %.2f\n", liters * (fuel_type == 'A' || fuel_type == 'a' ? 4.9 : 6.3) - (liters * (fuel_type == 'A' || fuel_type == 'a' ? 4.9 : 6.3) * discount / 100));

  return 0;
}
