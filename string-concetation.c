#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30];
	printf("Enter string:");
	gets(s1);  //scan value or [scanf]
	char s2[30];
	printf("enter string:");
	gets(s2);
	strcat(s1,s2);
	
	puts(s2);//print value or [printf]
	printf("string after concatenation :%s\n",s1);
}