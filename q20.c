#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[40];
    int  roll;
    float marks;
    struct Date dob;
};

void printStudent(struct Student s) {
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    printf("DOB  : %02d-%02d-%04d\n", s.dob.day, s.dob.month, s.dob.year);
}

int main(void) {
    struct Student s;

    printf("Enter student name (no spaces): ");
    scanf("%39s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Enter date of birth (day month year): ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.year);

    printf("\nStudent Information\n");
    printStudent(s);

    return 0;
}

