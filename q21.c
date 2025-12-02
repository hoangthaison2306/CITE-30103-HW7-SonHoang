#include <stdio.h>

int main(void) {
    int x = 42;      // any value
    int *p = &x;     // pointer to x

    printf("Value of x        = %d\n", x);
    printf("Address of x (&x) = %p\n", (void *)&x);
    printf("Value via *p      = %d\n", *p);

    return 0;
}

