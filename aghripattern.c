#include <stdio.h>
int main()
{
	int i, j, s, n;
	for (i = 4; i >= 1; i--)
	{
		for (j = 4; j >= i; j--)
		{
			printf("%d", j);
		}
		for (s = 1; s < i; s++)
		{
			printf("%d", i);
		}
		for (s = 2; s < i; s++)
		{
			printf("%d", i);
		}
		for (j = i; j <= 4; j++)
		{
			if (i > 1)
			{
				printf("%d", j);
			}
			else if (j == 3)
			{
				printf("4");
			}
			else if (j == 2)
			{
				printf("3");
			}
			else if (j == 1)
			{
				printf("2");
			}
		}

		printf("\n");
	}

	for (i = 2; i <= 4; i++)
	{
		for (j = 4; j >= i; j--)
		{
			printf("%d", j);
		}
		for (s = 2; s <= i; s++)
		{
			printf("%d", i);
		}
		for (s = 3; s <= i; s++)
		{
			printf("%d", i);
		}
		for (j = i; j <= 4; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}