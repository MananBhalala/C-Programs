#include <stdio.h>
int main()
// Array eklement Sum...

{

    int i;

    int a[5] = {1, 2, 4, 1, 2};
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum = %d", sum);
}