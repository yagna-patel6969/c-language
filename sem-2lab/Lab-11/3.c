// Find the length of the string using Pointers.
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char *p = str;
    int len = 0;
    while (*p != '\0') { len++; p++; }
    printf("Length of string: %d\n", len);
    return 0;
}
