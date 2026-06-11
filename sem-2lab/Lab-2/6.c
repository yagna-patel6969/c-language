// W.A.P. to perform an insertion operation on 1-D array.
#include <stdio.h>

int main() {
    int arr[100], n, pos, val, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter position to insert (0-indexed): ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);
    for (i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
