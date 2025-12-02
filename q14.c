#include <stdio.h>

int main(void) {
    char s1[201], s2[101];
    int i = 0, j = 0;

    printf("Enter first string (no spaces): ");
    scanf("%200s", s1);
    printf("Enter second string (no spaces): ");
    scanf("%100s", s2);

    // find end of s1
    while (s1[i] != '\0') {
        i++;
    }

    // copy s2 to end of s1
    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';

    printf("Concatenated string: %s\n", s1);

    return 0;
}

