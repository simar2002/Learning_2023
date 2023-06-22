#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(struct Student* students, int size, const char* searchName) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", searchName);
    }
}

void displayArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();  // Consume the newline character

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed. Exiting the program.\n");
        return 1;
    }

    printf("Enter student details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &(students[i].rollno));

        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);

        printf("Enter marks: ");
        scanf("%f", &(students[i].marks));

        printf("\n");
    }

    printf("\nStudent details:\n");
    displayArray(students, size);

    char searchName[20];
    printf("\nEnter the name to search: ");
    scanf(" %[^\n]", searchName);

    searchByName(students, size, searchName);

    free(students);

    return 0;
}