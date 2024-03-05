#include <stdio.h>
int main()
{

    int i, max = 0;

    int a[5] = {405, 71, 56, 87, 110};

    for (i = 0; i <= 5; i++)
    {

        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("the max value is : %d\n", max);

    // min...
    int min = max;
    for (i = 0; i <= 5; i++)
    {

        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("the max value is : %d", min);
}