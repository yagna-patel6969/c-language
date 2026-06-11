// Return the maximum of three floating-point numbers.
#include <stdio.h>

float maxOfThree(float a, float b, float c) {
    if (a >= b && a >= c) return a;
    else if (b >= a && b >= c) return b;
    else return c;
}

int main() {
    float a, b, c;
    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Maximum = %.2f\n", maxOfThree(a, b, c));
    return 0;
}
