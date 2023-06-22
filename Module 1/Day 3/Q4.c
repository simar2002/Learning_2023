#include <stdio.h>

// Function to find the smallest digit in a number
int findSmallestDigit(int num) {
    int smallest = 9;
    while (num) {
        int digit = num % 10;
        if (digit < smallest) 
        {
            smallest = digit;
        }
        num /= 10;
    }
    return smallest;
}

// Function to find the largest digit in a number
int findLargestDigit(int num) {
    int largest = 0;
    while (num) {
        int digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num /= 10;
    }
    return largest;
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int number;
    printf("Enter the %d values:\n", n);

    int smallest = 9; // Initialize smallest with maximum value
    int largest = 0; // Initialize largest with minimum value

    for (int i = 0; i < n; i++) {
        scanf("%d", &number);

        int smallestDigit = findSmallestDigit(number);
        if (smallestDigit < smallest) {
            smallest = smallestDigit;
        }

        int largestDigit = findLargestDigit(number);
        if (largestDigit > largest) {
            largest = largestDigit;
        }
    }

    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);

    return 0;
}