// Find the Sum and Average of 5 Numbers using command line arguments.
// Usage: ./3 10 20 30 40 50
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 6) {
        printf("Usage: %s <n1> <n2> <n3> <n4> <n5>\n", argv[0]);
        return 1;
    }
    int sum = 0;
    for (int i = 1; i <= 5; i++) sum += atoi(argv[i]);
    printf("Sum = %d\nAverage = %.2f\n", sum, sum / 5.0);
    return 0;
}
