// W.A.P. to calculate the length of a string without using the inbuilt function.
#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[len] != '\0') len++;
    printf("Length of string: %d\n", len);
    return 0;
}
