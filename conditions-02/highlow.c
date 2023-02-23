#include <stdio.h>

void highlow(int guess) {
    if (guess != 555) {
        if (guess > 555) {
            printf("Too high.\n");
        } else if (guess < 555) {
            printf("Too low.\n");
        }
    } else {
        printf("Correct! You got it.\n");
    }
}

int main(void) {
    highlow(500);
    highlow(600);
    highlow(555);
}
