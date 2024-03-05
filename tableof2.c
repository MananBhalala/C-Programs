#include <stdio.h>
void main()

{
    int n, i,a;
    printf("enter a number : ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        a=n*i;
        printf("%d*%d=%d\n",n,i,a);
    }
}