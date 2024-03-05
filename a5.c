#include <stdio.h>
int main()
{
	// individual sum of row & collumn

	int a[100][100], i, j, sr, sc, n1, n2;

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

	printf("matrix is :\n");

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			printf(" %d", a[i][j]);
		}
		printf("\n");
	}

	// sum
	for (i = 0; i < n1; i++)
	{
		sr = sc = 0;
		for (j = 0; j < n2; j++)
		{
			sr = sr + a[i][j];
			sc = sc + a[j][i];
		}
		printf("\nRow Sum=%d,Column Sum1=%d", sr, sc);
	}
}