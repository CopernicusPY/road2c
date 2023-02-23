#include <stdio.h>

int main(void) {
    int wallet = 50;
    int limit = 40;
    int spent = 9999;

    if (spent > wallet) {
        printf("What are you - Money doesn't summon out of thin air :P\n");
    } else {
        if (spent > limit) {
            printf("You also need to pay the rent remember?");
        }
    }

    // Utilize logical operators AND, OR (&&, ||)
    int foo = 1;
    int bar = 2;
    int moo = 3;

    if (foo < bar && moo > bar) {
        printf("foo (%i) < bar (%i) AND moo (%i) > bar (%i)\n", foo, bar, moo, bar);
    }
    
    if (foo < bar || moo > bar) {
        printf("foo (%i) < bar (%i) OR moo (%i) > bar (%i)\n", foo, bar, moo, bar);
    }

    int is_day = 0;

    if (is_day != 1) {
        printf("Go to sleep (zZz)");
    }
}