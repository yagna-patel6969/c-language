// Reverse a number and check if it is a palindrome.
#include <stdio.h>

int reverseNum(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
    int n, rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    rev = reverseNum(n);
    printf("Reversed number: %d\n", rev);
    printf("%d is %s\n", n, (n == rev) ? "a Palindrome" : "not a Palindrome");
    return 0;
}
