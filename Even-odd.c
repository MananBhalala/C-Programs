#include<stdio.h>
int main()
{
	int even=0,odd=0,n,n1,i;
	int num[100];
	
	printf("enter number Array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		if(num[i]%2==0)
		{
		even++;
		}
		else
		{
		odd++;
		}
	}
	printf("even values are :%d ,odd values are :%d",even,odd);
		
}