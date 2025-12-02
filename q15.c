#include <stdio.h>
#include <ctype.h>

int main(void) {
    char line[101];
    int i, words = 0;
    int inWord = 0;

    printf("Enter a line of text (up to 100 chars):\n");
    fgets(line, 101, stdin);

    for (i = 0; line[i] != '\0'; i++) {
        char ch = line[i];

        if (ch != ' ' && ch != '\t' && ch != '\n') {
            if (!inWord) {
                inWord = 1;
                words++;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Word count = %d\n", words);

    return 0;
}

