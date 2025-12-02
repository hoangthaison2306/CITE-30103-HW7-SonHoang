#include <stdio.h>

int main(void) {
    int a[5];
    int i, temp;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Reverse in place (no second array)
    for (i = 0; i < 5 / 2; i++) {
        temp = a[i];
        a[i] = a[5 - 1 - i];
        a[5 - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

