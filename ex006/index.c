#include <stdio.h>


int main() {
  float note1, note2, note3, average;

  printf("Type the first note: ");
  scanf("%f", &note1);

  printf("Type the second note: ");
  scanf("%f", &note2);

  printf("Type the third note: ");
  scanf("%f", &note3);

  average = ((note1 * 2) + (note2 * 3) + (note3 * 5)) / 10;

  if (average >= 7) {
    printf("Approved with average: %.2f\n", average);
  } else if (average >= 5 && average < 7) {
    printf("Final test with average: %.2f\n", average);
  } else {
    printf("Reproved with average: %.2f\n", average);
  }

  return 0;
}
