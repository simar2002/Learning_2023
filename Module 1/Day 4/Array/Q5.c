#include <stdio.h>

int findDifference(int arr[], int size) {
    int sumEven = 0, sumOdd = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];  // Add even element to sumEven
        } else {
            sumOdd += arr[i];   // Add odd element to sumOdd
        }
    }

    int difference = sumEven - sumOdd;
    return difference;
}

int main() {
    int size, arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int difference = findDifference(arr, size);

    printf("Difference: %d\n", difference);

    return 0;
}