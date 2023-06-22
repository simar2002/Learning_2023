#include <stdio.h>
void printIncreasing(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}
void printSpaces(int n) {
    
    int i;
    for (i = 1; i <= 2 * (n - 1); i++) {
        printf(" ");
    
}
}

void printDecreasing(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

void printPattern(int n) {
    int i,j;
    for (i = n; i >= 1; i--) {
        printIncreasing(i);
        for (j = n - 1; j >= i; j--) {
            printf("  ");
        }
        //printSpaces(i);
        printDecreasing(i);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}