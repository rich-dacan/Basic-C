#include <stdio.h>

int main() {
  float temperature;

  printf("Type the temperature in Celsius: ");
  scanf("%f", &temperature);

  printf("Temperature in Fahrenheit: %.2f\n", (temperature * 1.8) + 32);

  return 0;
}
