#include <stdio.h>

struct Student {
    char name[40];
    int  roll;
    float marks;
};

int main(void) {
    struct Student s[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Student %d\n", i + 1);
        printf("  Name (no spaces): ");
        scanf("%39s", s[i].name);
        printf("  Roll: ");
        scanf("%d", &s[i].roll);
        printf("  Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n%-5s %-15s %-10s %-10s\n", "No", "Name", "Roll", "Marks");
    printf("----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-5d %-15s %-10d %-10.2f\n",
               i + 1, s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}

