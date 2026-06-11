// Find the maximum number from two numbers using command line arguments.
// Usage: ./2 15 8
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Maximum of %d and %d = %d\n", a, b, (a > b) ? a : b);
    return 0;
}
