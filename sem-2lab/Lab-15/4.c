// Count Even and Odd numbers using command line arguments.
// Usage: ./4 1 2 3 4 5 6
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ...\n", argv[0]);
        return 1;
    }
    int even = 0, odd = 0;
    for (int i = 1; i < argc; i++) {
        int n = atoi(argv[i]);
        if (n % 2 == 0) even++; else odd++;
    }
    printf("Even count: %d\nOdd count : %d\n", even, odd);
    return 0;
}
