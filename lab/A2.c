#include <stdio.h>
int main()
{
    int a[3][3], i, j, negative_count = 0, positive_count = 0, zero_count = 0;
    printf("Enter matrix:");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] > 0)
            {
                printf("positive=%d\n", a[i][j]);
                positive_count++;
            }

            else if (a[i][j] < 0)
            {
                printf("\nnegative=%d", a[i][j]);
                negative_count++;
            }
            else if (a[i][j] == 0)
            {
                printf("zero=%d", a[i][j]);
                zero_count++;
            }
        }
    }
    printf("%d", positive_count);
    printf("%d", negative_count);
    printf("%d", zero_count);
}