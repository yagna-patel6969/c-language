// W.A.P. to find out whether the entered number is prime or not.
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) isPrime = 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) { isPrime = 0; break; }
    }
    printf("%d is %s\n", n, isPrime ? "Prime" : "Not Prime");
    return 0;
}
