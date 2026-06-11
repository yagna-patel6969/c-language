// Illustrate the use of #define preprocessor.
#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Area of circle = %.2f\n", PI * SQUARE(r));
    printf("Square of 5 = %d\n", SQUARE(5));
    printf("Max of 10 and 20 = %d\n", MAX(10, 20));
    return 0;
}
