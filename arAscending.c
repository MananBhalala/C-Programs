#include <stdio.h>
int main()
//  Ascending & Descending of array...

{
    int i, temp, j, n;
    int a[n];
    printf("How many element to add in array:");

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array is: ");
    for (j = 0; j < n; j++)
    {
        printf("%d,", a[j]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Acending array : ");
    for (i = 0; i < n; i++)
    {

        printf("%d,", a[i]);
    }
}