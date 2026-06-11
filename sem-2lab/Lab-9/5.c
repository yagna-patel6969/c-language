// Swap two arrays using pointers.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], b[n], temp;
    int *pa = a, *pb = b;
    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++) scanf("%d", pa + i);
    printf("Enter elements of second array: ");
    for (int i = 0; i < n; i++) scanf("%d", pb + i);
    for (int i = 0; i < n; i++) {
        temp = *(pa + i);
        *(pa + i) = *(pb + i);
        *(pb + i) = temp;
    }
    printf("First array after swap: ");
    for (int i = 0; i < n; i++) printf("%d ", *(pa + i));
    printf("\nSecond array after swap: ");
    for (int i = 0; i < n; i++) printf("%d ", *(pb + i));
    printf("\n");
    return 0;
}
