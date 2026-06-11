// Calculate the sum of n numbers entered by the user using malloc().
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) { printf("Memory allocation failed!\n"); return 1; }
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    printf("Sum = %d\n", sum);
    free(arr);
    return 0;
}
