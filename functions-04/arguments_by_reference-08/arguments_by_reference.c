#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

// void addone(int n);
void addone_new(int *n);
void move(point *p);


int main(void) {
    int n;

    printf("Before: %i\n", n);
    // addone(n);
    addone_new(&n);
    printf("After: %i\n", n);

    // Point example
    point a;
    a.x = 5;
    a.y = 10;

    printf("(x, y) = %i, %i\n", a.x, a.y);
    move(&a);
    printf("(x, y) = %i, %i\n", a.x, a.y);

}

// void addone(int n) {
//     // Variable `n` only exists in the functions scope.
//     n++;
// }

void addone_new(int *n) {
    // Variable `n` is a pointer to the original n
    (*n)++;
}

void move(point *p) {
    p->x++;
    p->y++;
}