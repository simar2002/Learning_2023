#include <stdio.h>

int main()
{
    int rollNo;
    char name[50];
    float physics, math, chemistry;
    float total, percentage;

    // Read inputs
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks in Physics: ");
    scanf("%f", &physics);

    printf("Enter Marks in Math: ");
    scanf("%f", &math);

    printf("Enter Marks in Chemistry: ");
    scanf("%f", &chemistry);

    // Calculate total and percentage
    total = physics + math + chemistry;
    percentage = (total / 300) * 100;

    // Print summary
    printf("\n Student Summary \n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics);
    printf("Math Marks: %.2f\n", math);
    printf("Chemistry Marks: %.2f\n", chemistry);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f\n", percentage);

    return 0;
}