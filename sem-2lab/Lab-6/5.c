// Add two distances in feet and inches using structure.
#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

struct Distance addDistance(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.inches = d1.inches + d2.inches;
    result.feet = d1.feet + d2.feet + (int)(result.inches / 12);
    result.inches = result.inches - (int)(result.inches / 12) * 12;
    return result;
}

int main() {
    struct Distance d1, d2, sum;
    printf("Enter first distance (feet inches): "); scanf("%d %f", &d1.feet, &d1.inches);
    printf("Enter second distance (feet inches): "); scanf("%d %f", &d2.feet, &d2.inches);
    sum = addDistance(d1, d2);
    printf("Sum = %d feet %.2f inches\n", sum.feet, sum.inches);
    return 0;
}
