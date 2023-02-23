#include <stdio.h>

// Add `num` to a summary
int sum (int num);

int main() {
    printf("%d ",sum(55));
    printf("%d ",sum(45));
    printf("%d ",sum(50));
    return 0;
}

int sum(int num) {
    static int sum = 0;
    sum += num;

    return sum;
}