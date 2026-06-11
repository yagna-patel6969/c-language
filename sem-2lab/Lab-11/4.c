// Copy one string into another string using Pointers.
#include <stdio.h>

int main() {
    char src[100], dest[100];
    char *ps = src, *pd = dest;
    printf("Enter a string: ");
    scanf("%s", src);
    while (*ps != '\0') { *pd = *ps; ps++; pd++; }
    *pd = '\0';
    printf("Copied string: %s\n", dest);
    return 0;
}
