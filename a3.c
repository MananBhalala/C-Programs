#include <stdio.h>
int main()
{
	// Array sum

	int i, sum[100], a1[100], a2[100], n1, n2;

	printf("enter the no of ele. a1 :");
	scanf("%d", &n1);

	for (i = 0; i < n1; i++)
	{
		scanf("%d", &a1[i]);
	}

l:
	printf("enter the no of ele. of a2 :");
	scanf("%d", &n2);

	if (n1 != n2)
	{
		printf("Re-enter the  Same value!!!");
		goto l;
	}
	else
	{

		for (i = 0; i < n2; i++)
		{
			scanf("%d", &a2[i]);
		}

		for (i = 0; i < n2; i++)
		{
			sum[i] = a1[i] + a2[i];
		}
		for (i = 0; i < n2; i++)
		{
			printf("index of %d sum is %d\n", i, sum[i]);
		}
	}
}