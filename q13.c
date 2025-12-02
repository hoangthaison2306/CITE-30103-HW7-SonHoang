#include <stdio.h>
#include <ctype.h>

int main(void) {
    char line[101];
    int vowels = 0, consonants = 0, digits = 0;
    int i;

    printf("Enter a line of text (up to 100 chars):\n");
    fgets(line, 101, stdin);   // read the line

    for (i = 0; line[i] != '\0'; i++) {
        char ch = line[i];

        if (isdigit((unsigned char)ch)) {
            digits++;
        } else if (isalpha((unsigned char)ch)) {
            char lower = tolower((unsigned char)ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}

