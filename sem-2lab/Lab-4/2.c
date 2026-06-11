// Swap two numbers using call by value.
#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function: a = %d, b = %d\n", a, b);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    swapByValue(a, b);
    printf("After swap (original unchanged): a = %d, b = %d\n", a, b);
    return 0;
}
