#include <stdio.h>
#include <ctype.h>

void toggleString(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toggleString(str);

    printf("Toggled string: %s\n", str);

    return 0;
}