// 8. Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior ou igual a zero escrever a mensagem 'Saldo Positivo', senão escrever a mensagem 'Saldo Negativo'.

#include <stdio.h>

int main() {
  float account_number, balance, debit, credit, balance_final;

  printf("Type the account number: ");
  scanf("%f", &account_number);

  printf("Type the balance: ");
  scanf("%f", &balance);

  printf("Type the debit: ");
  scanf("%f", &debit);

  printf("Type the credit: ");
  scanf("%f", &credit);

  balance_final = balance - debit + credit;

  printf("Actual balance: %.2f $$$\n", balance_final);

  if (balance_final >= 0) {
    printf("Positive balance\n");

  } else {
    printf("Negative balance\n");
  }

  return 0;
}
