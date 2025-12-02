#include <stdio.h>

int main(void) {
    int n, i;
    int arr[100];
    int evenCount = 0, oddCount = 0;

    printf("Enter number of integers (max 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Error: n must be between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even count = %d\n", evenCount);
    printf("Odd count  = %d\n", oddCount);

    return 0;
}

