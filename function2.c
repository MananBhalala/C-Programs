#include <stdio.h>

int sum(int a , int b);
int main()

{
    int a, b, c;
    printf("enter a:");
    scanf("%d", &a);

    printf("enter b:");
    scanf("%d", &b);

    c = sum(a, b);

    printf("sum = %d", c);
}
int sum(int x, int y)
{

    int add, a, b;
    return x + y;
}
