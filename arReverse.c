#include <stdio.h>
int main()
{
    int a[6] = {23, 34, 21, 2, 5, 6};
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("%d,", a[i]);
    }
    printf("\n");

    for (i = 5; i >= 0; i--)
    {
        printf("%d,", a[i]);
    }
}