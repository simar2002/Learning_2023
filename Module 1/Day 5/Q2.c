#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

void readComplex(struct Complex *c) {
    printf("Enter the real part: & imaginary part ");
    scanf("%lf" "%lf", &(c->real),&(c->imag));

    // printf("Enter the imaginary part: ");
    // scanf("%lf", &(c->imag));
}

void writeComplex(struct Complex c) {
    printf(" %.2f + %.2fi\n", c.real, c.imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    struct Complex c1, c2, sum, product;

    printf("Enter the complex number1:\n");
    readComplex(&c1);

    printf("Enter the complex number2:\n");
    readComplex(&c2);

    printf("First complex number1:");
    writeComplex(c1);

    printf("Second complex number2:");
    writeComplex(c2);

    sum = addComplex(c1, c2);
    printf("Sum  complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(c1, c2);
    printf("Product  complex numbers:\n");
    writeComplex(product);

    return 0;
}