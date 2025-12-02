#include <stdio.h>

int main(void) {
    char s[101];
    int len = 0;

    printf("Enter a string (no spaces): ");
    scanf("%100s", s);

    while (s[len] != '\0') {
        len++;
    }

    printf("Length = %d\n", len);

    return 0;
}

