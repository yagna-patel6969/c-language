// Find Maximum Element in a 2-D Array Using Pointers.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    int *p = &mat[0][0];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows * cols; i++) scanf("%d", p + i);
    int max = *p;
    for (int i = 1; i < rows * cols; i++)
        if (*(p + i) > max) max = *(p + i);
    printf("Maximum element: %d\n", max);
    return 0;
}
