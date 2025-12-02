#include <stdio.h>

int main(void) {
    int a[10];
    int i, max, min;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for (i = 1; i < 10; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Largest value = %d\n", max);
    printf("Smallest value = %d\n", min);

    return 0;
}

