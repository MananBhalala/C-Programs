#include<stdio.h>
int main()
{
	int marks[100],i,n;
	float sum=0,avg;
	
	printf("enter the no of sub.:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+marks[i];	
	}
	avg=sum/n;
	printf("sum of marks is :%.2f\n",sum);
	printf("avg. of marks is :%.2f",avg);
}  