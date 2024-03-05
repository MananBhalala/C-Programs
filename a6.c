#include <stdio.h>
int main()
{
	// sum of matrix A & B

	int a[100][100], b[100][100], c[100][100], i, j, n1, n2, n3, n4;

	printf("enter no. of row :");
	scanf("%d", &n1);

	printf("\nenter no. of column :");
	scanf("%d", &n2);

	printf("\nelements of matrix :\n");

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("matrix A is :\n");

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}

M:
	printf("\nenter no. of row :");
	scanf("%d", &n3);

	printf("\nenter no. of column :");
	scanf("%d", &n4);

	if (n1 == n3 && n2 == n4)
	{

		printf("elements of matrix :\n");

		for (i = 0; i < n3; i++)
		{
			for (j = 0; j < n4; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}

		printf("\nmatrix B is :\n");

		for (i = 0; i < n3; i++)
		{
			for (j = 0; j < n4; j++)
			{
				printf(" %d", b[i][j]);
			}
			printf("\n");
		}

		// sum of matrix A & B

		printf("matrix c is :\n");

		for (i = 0; i < n1; i++)
		{
			for (j = 0; j < n2; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
				printf(" %d", c[i][j]);
			}
			printf("\n");
		}
	}

	else
	{
		printf("enter the same value of n3 and n4");
		goto M;
	}
}