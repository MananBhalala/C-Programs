#include <stdio.h>
int main()
{
    int i, j, s, n;

    printf("enter number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (s = i; s <= n - 1; s++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (s = i; s <= n - 1; s++)
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}