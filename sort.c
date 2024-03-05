#include <stdio.h>
int main()
{
	int a[10], b[10], i, j, c, size1, size2;

	printf("Enter the No. of size A1:");
	scanf("%d", &size1);

	for (i = 0; i < size1; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("Enter the No. of size A2:");
	scanf("%d", &size2);

	for (i = 0; i < size2; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < size2; i++)
	{
		a[size1 + i] = b[i];
	}

	printf("merged array\n");

	for (i = 0; i < size1 + size2; i++)
	{
		printf("%d\n", a[i]);
	}

	printf("sorted array :\n");

	for (i = 0; i < size1 + size2; i++)
	{
		for (j = i + 1; j < size1 + size2; j++)
		{
			if (a[i] >= a[j])
			{
				c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}

	for (i = 0; i < size1 + size2; i++)
	{
		printf("%d\n", a[i]);
	}
}  	