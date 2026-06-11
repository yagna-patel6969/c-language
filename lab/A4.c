#include <stdio.h>
int main()
{
    int a[20][20], b[20][20], i, j, r, c;
    printf("Enter total rows:");
    scanf("%d", &r);
    printf("Enter total columns:");
    scanf("%d", &c);

    printf("Enter matrix:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Original Array\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("Transposed Array\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
