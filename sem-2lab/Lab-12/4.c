// Write a program that demonstrates the use of realloc().
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter initial number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) { printf("malloc failed!\n"); return 1; }
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int extra;
    printf("Enter number of additional elements: ");
    scanf("%d", &extra);
    arr = (int *)realloc(arr, (n + extra) * sizeof(int));
    if (arr == NULL) { printf("realloc failed!\n"); return 1; }
    printf("Enter %d more elements: ", extra);
    for (int i = n; i < n + extra; i++) scanf("%d", &arr[i]);

    printf("All elements after realloc: ");
    for (int i = 0; i < n + extra; i++) printf("%d ", arr[i]);
    printf("\n");
    free(arr);
    return 0;
}
