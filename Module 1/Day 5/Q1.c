#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

void calculate(struct Box *box) {
    double volume = box->length * box->width * box->height;
    double surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("Volume of the box: %.2f\n", volume);
    printf("Surface area of the box: %.2f\n", surfaceArea);

int main() {
    struct Box myBox;
    struct Box *boxPtr;

    // Accessing members using dot operator
    myBox.length = 1.0;
    myBox.width = 3.0;
    myBox.height = 2.0;

    calculate(&myBox);

    // Accessing members using structure pointer and arrow operator
    boxPtr = &myBox;
    (*boxPtr).length = 1.0;
    boxPtr->width = 3.0;
    boxPtr->height = 2.0;

    calculate(boxPtr);

    return 0;
}