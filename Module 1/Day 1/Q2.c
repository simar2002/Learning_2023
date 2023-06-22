#include <stdio.h>
char Grade(int marks)
{
    if (marks >= 90 && marks <= 100)
        return 'A';
    else if (marks >= 75 && marks <= 89)
        return 'B';
    else if (marks >= 60 && marks <= 74)
        return 'C';
    else if (marks >= 50 && marks <= 59)
        return 'D';
    else
        return 'F';
}
int main()
{
    // Variable dec50laration
    int marks;
    printf("Enter Marks\n");
    scanf("%d", &marks);
    char result = Grade(marks);
    printf("Grade  is : %c", result);
    return 0;
}