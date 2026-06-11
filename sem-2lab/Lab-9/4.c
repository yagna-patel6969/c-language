// Copy one array to another using pointers.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int src[n], dest[n];
    int *ps = src, *pd = dest;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", ps + i);
    for (int i = 0; i < n; i++) *(pd + i) = *(ps + i);
    printf("Copied array: ");
    for (int i = 0; i < n; i++) printf("%d ", *(pd + i));
    printf("\n");
    return 0;
}
