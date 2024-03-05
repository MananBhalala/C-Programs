#include<stdio.h>
int main()
    {
        int i,j,s;

        for ( i = 5; i >=1; i--)
        {
            for(s=1;s<=i;s++)
            {
                printf("  ");
            }
            for(j=5;j>=i;j--)
            {
                printf("%d ",j);
            }
            for(j=i;j<=4;j++)
            {
                printf("%d ",j+1);
            }
            printf("\n");
        }
        
    }
