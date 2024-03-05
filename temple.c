#include <stdio.h>
int main()
{
    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 7; j++)
        {

            if (i == 5 || i == 6 || i == 10 || ((j == 1 || j == 7) && i > 5) || j + i == 5 || j - i == 3 || i == 8 && j == 3 || i == 8 && j == 4 || i == 8 && j == 5 || i == 9 && j == 3 || i == 9 && j == 5 || i == 1 && j > 4)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
}