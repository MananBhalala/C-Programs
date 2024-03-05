#include <stdio.h>
void main()
{
    int marks;
    printf("enter number(1-100) : ");
    scanf("%d", &marks);

    if (marks <= 33)

    {
        printf("Fail \n");
    }

    else if (marks > 33 && marks <= 100)

    {
        printf("Pass \n");
    }
else
{
    printf("Wrong marks \n");
}
}