// Calculate sum of two numbers using pointer.
#include <stdio.h>

int main() {
    int a, b, sum;
    int *pa = &a, *pb = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", pa, pb);
    sum = *pa + *pb;
    printf("Sum = %d\n", sum);
    return 0;
}
