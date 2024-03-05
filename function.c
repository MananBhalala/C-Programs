#include <stdio.h>

void sum();
void main()

{
    sum();
}
void sum()
{
    int a, b;

    printf("enter a:");
    scanf("%d", &a);

    printf("enter b:");
    scanf("%d", &b);

    printf("sum = %d", a + b);
    printf("\n");
    return sum();
    
}
