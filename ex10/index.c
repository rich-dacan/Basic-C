// 10. A prefeitura de uma cidade deseja fazer uma pesquisa entre seus habitantes. Faça um algoritmos para coletar dados sobre o salário e número de filhos de cada habitante e após as leituras, escrever: a) Média de salário da população b) Média do número de filhos c) Maior salário dos habitantes d) Percentual de pessoas com salário menor que R$ 1000,00 Obs.: O final da leituras dos dados se dará com a entrada de um “salário negativo”.

#include <stdio.h>

int main() {

  double salary, total_salary = 0, highest_salary = 0;
  int persons_add_qtd, children, total_children = 0, counter = 0, salary_less_than_1000 = 0;

  printf("Enter the number of people to add: ");
  scanf("%d", &persons_add_qtd);

  while(counter < persons_add_qtd) {
    printf("\nEnter the salary: ");
    scanf("%lf", &salary);

    printf("\nEnter the number of children: ");
    scanf("%d", &children);

    total_salary += salary;
    total_children += children;
    counter++;

    if (salary < 1000) {
        salary_less_than_1000++;
    }

    if (salary > highest_salary) {
        highest_salary = salary;
    }
  }

  if(counter > 0) {
      printf("Average population salary: $ %.2lf\n", total_salary / counter);
      printf("Average number of children: %.2lf\n", (double)total_children / counter);
      printf("Highest salary of the habitants: $ %.2lf\n", highest_salary);
      printf("Percentage of people with salary less than $ 1000.00: %.2lf%%\n", (double)salary_less_than_1000 / counter * 100);
  } else {
      printf("No data was entered.\n");
  }

  return 0;
}
