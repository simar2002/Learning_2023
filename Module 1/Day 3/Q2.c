#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    // Convert the number to a string for easier digit manipulation
    char strNum[5];
    sprintf(strNum, "%d", num);

    for (int i = 0; i < 4; i++) {
        // Create a temporary number by removing the digit at position i
        char tempNum[4];
        int index = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                tempNum[index] = strNum[j];
                index++;
            }
        }
        tempNum[3] = '\0';
        
        // Convert the temporary number back to an integer
        int tempInt = atoi(tempNum);
        
        // Check if the temporary number is larger than the current largest
        if (tempInt > largest) {
            largest = tempInt;
        }
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);
    printf("Largest number by deleting a single digit: %d\n", largest);

    return 0;
}