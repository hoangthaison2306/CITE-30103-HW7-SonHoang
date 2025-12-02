#include <stdio.h>

int main(void) {
    int n, i;
    int arr[100];
    int sum = 0;
    float average;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Error: n must be between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}

