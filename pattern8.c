#include <stdio.h>
int main()
{
    int i, j, s;

    for(i=1;i,=5;i++)
    {
        printf
    }
    // lower part of pattern
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (s = 4; s >= i; s--)
        {
            printf(" ", s);
        }
        for (s = 4; s >= i; s--)
        {
            printf(" ", s);
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}