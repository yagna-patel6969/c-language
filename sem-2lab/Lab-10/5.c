// Sort array using pointers.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", p + i);
    // Bubble sort using pointers
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (*(p + j) > *(p + j + 1)) {
                int temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", *(p + i));
    printf("\n");
    return 0;
}
