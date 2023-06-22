#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
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

    initializeArray(students, size);

    printf("Initialized student details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);

    return 0;
}