// Swap two numbers using call by reference.
#include <stdio.h>

void swapByRef(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapByRef(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
