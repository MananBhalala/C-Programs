#include <stdio.h>
int main()
{
	int a[100][100], i, j, n1, n2;

	printf("enter element of row:");
	scanf("%d", &n1);

	printf("\nenter element of column:");
	scanf("%d", &n2);

	printf("\nenter element of matrix:\n");

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("matrix is :\n");

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}

	printf("\ntrnspose of matrix :\n");

	for (i = 0; i < n2; i++)
	{
		for (j = 0; j < n1; j++)
		{
			printf(" %d", a[j][i]);
		}
		printf("\n");
	}
}