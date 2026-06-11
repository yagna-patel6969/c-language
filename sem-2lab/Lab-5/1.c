// Find the factorial of a number using a function and a recursive function.
#include <stdio.h>

long long factIterative(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}

long long factRecursive(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factRecursive(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial (iterative) = %lld\n", factIterative(n));
    printf("Factorial (recursive) = %lld\n", factRecursive(n));
    return 0;
}
