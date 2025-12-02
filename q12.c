#include <stdio.h>

int main(void) {
    char s[101];
    int i = 0, j, isPal = 1;

    printf("Enter a word (no spaces): ");
    scanf("%100s", s);

    // find length
    while (s[i] != '\0') i++;
    j = i - 1;
    i = 0;

    while (i < j) {
        if (s[i] != s[j]) {
            isPal = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPal)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}

