#include <stdio.h>

// Print a string if `number` > 10
void print_big(int number);

int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

void print_big(int number) {
    if (number > 10) {
        printf("%i is kinda big don't you think?\n", number);
    }
}