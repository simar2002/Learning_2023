#include <stdio.h>

int findDiff(int arr[], int size) {
    int sumeven = 0, sumodd = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumeven += arr[i];  
        } else {
            sumodd += arr[i];   
        }
    }

    int diff = sumeven - sumodd;
    return diff;
}

int main() {
    int size, arr[100];

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int difference = findDiff(arr, size);

    printf("Difference: %d\n", difference);

    return 0;
}