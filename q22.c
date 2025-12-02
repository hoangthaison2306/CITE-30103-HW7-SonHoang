#include <stdio.h>

int main(void) {
    int a[5];
    int *p = a;   // pointer to first element
    int i;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", (p + i));     // same as &a[i]
    }

    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(p + i));  // no [] indexing
    }
    printf("\n");

    return 0;
}

