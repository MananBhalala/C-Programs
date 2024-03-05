#include <stdio.h>
int main()
{

    int i, n;
    int n1 = 0, n2 = 1;

    int sum = n1 + n2;

    printf("Enter no. of Terms:");
    scanf("%d", &n);

    printf("Fibonaci Series: %d, %d,", n1, n2);

    for (i = 3; i <= n; ++i)
    {
        printf(" %d,", sum);
        n1 = n2;
        n2 = sum;
        sum = n1 + n2;
    }
}
