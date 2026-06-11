// Print positive and negative numbers in array using pointers.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", p + i);
    printf("Positive numbers: ");
    for (int i = 0; i < n; i++)
        if (*(p + i) > 0) printf("%d ", *(p + i));
    printf("\nNegative numbers: ");
    for (int i = 0; i < n; i++)
        if (*(p + i) < 0) printf("%d ", *(p + i));
    printf("\n");
    return 0;
}
