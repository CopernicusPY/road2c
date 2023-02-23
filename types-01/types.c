#include <stdio.h>

int main(void) {
    int integer = 10;
    float my_float = 5.1;
    char string[] = "Hello world";
    // Array of 5 integers
    int numbers[5];

    numbers[0] = 10 * 1;
    numbers[1] = 10 * 2;
    numbers[2] = 10 * 3;
    numbers[3] = 10 * 4;
    numbers[4] = 10 * 5;
    numbers[5] = 10 * 6;

    printf("%i is an integer\n", integer);
    printf("%f is a float\n", my_float);
    printf("%s is a string\n", string);
    printf("%d is the 4th number from an integer array", numbers[3]);
}