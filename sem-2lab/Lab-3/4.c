// Generate a Fibonacci series of N given numbers using the function fibbo().
#include <stdio.h>

void fibbo(int n) {
    int a = 0, b = 1, c, i;
    printf("Fibonacci series: %d %d ", a, b);
    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibbo(n);
    return 0;
}
