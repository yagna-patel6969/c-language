// Swap elements of two integer arrays using user-defined function.
#include <stdio.h>

void swapArrays(int a[], int b[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        temp = a[i]; a[i] = b[i]; b[i] = temp;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter elements of second array: ");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    swapArrays(a, b, n);
    printf("First array after swap: ");
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\nSecond array after swap: ");
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
