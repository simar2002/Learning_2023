#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseAndInitialize(char* input, struct Student* students, int size) {
    char* token = strtok(input, " ");  // Tokenize the input string using space as the delimiter

    for (int i = 0; i < size; i++) {
        // Parse and assign values to the corresponding fields of the structure
        students[i].rollno = atoi(token);
        token = strtok(NULL, " ");
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        token = strtok(NULL, " ");  // Move to the next set of values
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar();  // Consume the newline character

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    char input[100];
    printf("Enter the input string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';  // Remove the newline character from input

    parseAndInitialize(input, students, size);
    printf("\nStudent details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);

    return 0;
}