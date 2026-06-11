// Store n elements in an array and print the elements using pointer.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", p + i);
    printf("Array elements: ");
    for (int i = 0; i < n; i++) printf("%d ", *(p + i));
    printf("\n");
    return 0;
}
