// Add two matrices using Pointers.
#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3];
    int *pa = &a[0][0], *pb = &b[0][0], *pc = &c[0][0];
    printf("Enter elements of first 3x3 matrix:\n");
    for (int i = 0; i < 9; i++) scanf("%d", pa + i);
    printf("Enter elements of second 3x3 matrix:\n");
    for (int i = 0; i < 9; i++) scanf("%d", pb + i);
    for (int i = 0; i < 9; i++) *(pc + i) = *(pa + i) + *(pb + i);
    printf("Sum matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%d ", *(pc + i * 3 + j));
        printf("\n");
    }
    return 0;
}
