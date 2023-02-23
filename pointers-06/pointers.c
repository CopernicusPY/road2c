#include <stdio.h>

int main(void) {
    int foo = 1; // Initialize the `foo` variable and set it to 1
    int *pfoo = &foo; // Create a pointer variable that points to `foo`

    printf("The value of foo is %d\n", foo); // Access `foo` directly
    printf("The value of foo is also %d\n", *pfoo); // Access `foo` via the pointer
}