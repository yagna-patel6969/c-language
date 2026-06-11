// Find the reverse of any number using recursion.
#include <stdio.h>

int reverseRec(int n, int rev) {
    if (n == 0) return rev;
    return reverseRec(n / 10, rev * 10 + n % 10);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number: %d\n", reverseRec(n, 0));
    return 0;
}
