// Find the maximum number between two numbers using a function.
#include <stdio.h>

int maxNum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Maximum = %d\n", maxNum(a, b));
    return 0;
}
