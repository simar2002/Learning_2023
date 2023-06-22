#include <stdio.h>

void printBits(int num) {
    int size = sizeof(int) * 8;  // Total number of bits in an integer
    int mask = 1 << (size - 1);  // Create a mask with the leftmost bit set

    for (int i = 0; i < size; i++) {
        int bit = (num & mask) ? 1 : 0;  // Check if the current bit is set
        printf("%d", bit);
        
        // Shift the mask to the right for the next bit
        mask >>= 1;
    }
    
    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    printBits(num);

    return 0;
}