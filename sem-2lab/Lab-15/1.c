// Perform the addition of two numbers using command line arguments.
// Usage: ./1 5 10
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Sum of %d and %d = %d\n", a, b, a + b);
    return 0;
}
