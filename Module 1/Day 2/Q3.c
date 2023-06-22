#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 0};
    int lengthofarray = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    for (int i = 0; i < lengthofarray; i += 2) {
        sum += array[i];
    }

    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}