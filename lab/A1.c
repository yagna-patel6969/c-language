#include <stdio.h>
int main()
{
    int a[500][500], i, j, r, c;
    printf("Enter total rows:");
    scanf("%d", &r);
    printf("Enter total columns:");
    scanf("%d", &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}