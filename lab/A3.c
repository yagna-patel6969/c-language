#include <stdio.h>
int main()
{
    int a[20][20], i, j;
    printf("Enter matrix:");
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            printf("%d", a[i][j]);
        }
    }
    return 0;
}