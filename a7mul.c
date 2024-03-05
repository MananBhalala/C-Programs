#include <stdio.h>
int main()
{
	// multiplication of matrix

	int a[100][100], b[100][100], c[100][100], i, j, k, n1, n2, n3, n4, sum = 0;

	printf("enter row of 1 matrix :");
	scanf("%d", &n1);

	printf("\nenter column 1 matrix :");
	scanf("%d", &n2);

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("matrix 1 is :\n");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

M:
	printf("\nenter row of 2 matrix :");
	scanf("%d", &n3);

	printf("\nenter column 2 matrix :");
	scanf("%d", &n4);

	if (n2 != n3)

	{
		printf("\nenter same value of n2 & n3");
		goto M;
	}
	else
	{

		for (i = 0; i < n3; i++)
		{
			for (j = 0; j < n4; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}

		printf("matrix 2 is :\n");

		for (i = 0; i < n3; i++)
		{
			for (j = 0; j < n4; j++)
			{
				printf("%d ", b[i][j]);
			}
			printf("\n");
		}

		// multiplication of matrix

		for (i = 0; i < n1; i++)
		{
			for (j = 0; j < n4; j++)
			{
				sum = 0;
				for (k = 0; k < n3; k++)
				{
					sum = sum + a[i][k] * b[k][j];
					c[i][j] = sum;
				}
			}
		}

		printf("matrix mul. is :\n");
		for (i = 0; i < n1; i++)
		{
			for (j = 0; j < n4; j++)
			{
				printf("%d ", c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}