#include<stdio.h>

void reverse(int num, int *a) {
    int tmp;
    for (int i = 0; i < num / 2; i++) {
        tmp = a[i];
        a[i] = a[num - i - 1];
        a[num - i - 1] = tmp;
    }
}

int main() {
    int num, p[50];
    int *a = p;

    printf("Enter the length of the array: ");
    scanf("%d", &num);

    printf("Enter the elements: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &p[i]);
    }

    reverse(num, a);

    printf("Reversed array: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}