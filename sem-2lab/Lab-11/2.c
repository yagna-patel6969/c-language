// Print the sum of columns of a matrix using Pointers.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    int *p = &mat[0][0];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows * cols; i++) scanf("%d", p + i);
    printf("Column sums:\n");
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) sum += *(p + i * cols + j);
        printf("Column %d: %d\n", j + 1, sum);
    }
    return 0;
}
