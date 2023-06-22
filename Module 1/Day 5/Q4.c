#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *students = malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    printf("Enter student details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &(students[i].rollNo));

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter age: ");
        scanf("%d", &(students[i].age));

        printf("\n");
    }

    printf("Student details:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n\n", students[i].age);
    }

    free(students);

    return 0;
}