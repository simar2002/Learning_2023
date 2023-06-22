#include <stdio.h>
#include <string.h>

void rotateString(char* str, int positions, char direction) {
    int len = strlen(str);
    positions = positions % len;
    if (positions < 0)
        positions += len;
    if (direction == 'L') {
        for (int i = 0; i < positions; i++) {
            char temp = str[0];
            for (int j = 0; j < len - 1; j++) {
                str[j] = str[j + 1];
            }
            str[len - 1] = temp;
        }
    }
    else if (direction == 'R') {
        for (int i = 0; i < positions; i++) {
            char temp = str[len - 1];
            for (int j = len - 1; j > 0; j--) {
                str[j] = str[j - 1];
            }
            str[0] = temp;
        }
    }
}

int main() {
    char str[] = "abcdxyz";
    int positions = 2;
    char direction = 'L';

    printf("Input String: %s\n", str);

    rotateString(str, positions, direction);

    printf("Rotated String: %s\n", str);

    return 0;
}