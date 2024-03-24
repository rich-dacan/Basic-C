// 7. A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas).

#include <stdio.h>

int main() {
  int worked_hours, salary;
  float price_hour = 33, total_salary;

  printf("Type the number of hours worked in a this month: ");
  scanf("%d", &worked_hours);

  if (worked_hours > 120) {
    total_salary = (worked_hours -120) * (price_hour * 1.5) + (120 * price_hour);

    printf("Total salary: %.2f $$$\n", total_salary);

    return total_salary;
  } else {
    total_salary = worked_hours * price_hour;

    printf("Total salary: %.2f $$$\n", total_salary);

    return total_salary;
  }

  return 0;
}
