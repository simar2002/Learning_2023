#include <stdio.h>

int stringToInteger(const char str[]) {
    int res = 0;
    int sign = 1;  
    int i = 0;
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }
    while (str[i] != '\0') {
        int ival = str[i] - '0'; 
        
        if (ival >= 0 && ival <= 9) {
            res = res * 10 + ival;  
        } else {
            break; 
        }

        i++;
    }

    return res * sign;
}

int main() {
    const char str[] = "65278";

    int result = stringToInteger(str);

    printf("Result: %d\n", result);

    return 0;
}