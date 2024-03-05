#include <stdio.h>
int main()
{
    int i, j, s;

    for (i = 5; i >= 1; i--)
    {
        for (s = 1; s <= i; s++)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("*");
        }
        for (j = i + 1; j <= 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
              // for (i = 1; i <= 5; i++)
        // {
        //     for (j = 1; j <= 5; j++)
        //     {
        //         printf("*");
        //     }
        //     printf("\n");
        
    
