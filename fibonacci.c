#include <stdio.h>
void main()
{
    int a = 0, b = 1, c = 0, n;

    printf("enter number : ");
    scanf("%d", &n);

    printf("fibonacci series :\n");

    if (n == 1)
    {
        printf("%d ", a);
    }
    else
    {
        printf("%d %d ", a, b);
        for (int i = 2; i < n; i++)
        {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
    }
}