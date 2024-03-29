#include <stdio.h>

// Function to count the number of set bits in a number
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

// Function to count the total number of set bits in an array
int countTotalSetBits(int arr[], int size) {
    int totalSetBits = 0;
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }
    return totalSetBits;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);

    int totalSetBits = countTotalSetBits(arr, size);
    printf("The total number of set bits in the given array is: %d\n", totalSetBits);

    return 0;
}