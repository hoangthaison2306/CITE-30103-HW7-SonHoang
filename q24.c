#include <stdio.h>

int square(int x) {
    return x * x;
}

int main(void) {
    int n, result;
    int (*fp)(int);   // function pointer

    fp = square;      // point to square

    printf("Enter an integer: ");
    scanf("%d", &n);

    result = fp(n);   // call via function pointer

    printf("square(%d) = %d\n", n, result);

    return 0;
}

