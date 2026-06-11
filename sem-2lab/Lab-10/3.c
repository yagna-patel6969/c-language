// Find even and odd numbers in array using pointer.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", p + i);
    printf("Even numbers: ");
    for (int i = 0; i < n; i++)
        if (*(p + i) % 2 == 0) printf("%d ", *(p + i));
    printf("\nOdd numbers: ");
    for (int i = 0; i < n; i++)
        if (*(p + i) % 2 != 0) printf("%d ", *(p + i));
    printf("\n");
    return 0;
}
