#include <stdio.h>
#include <math.h>

void main()

{
    int num1, num2, op;
    float result;
    printf("enter two numbers :\n");
    scanf("%d %d", &num1, &num2);

    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        result = num1 + num2;
        printf("result is: %f", result);
        break;
    case 2:
        printf("result is: %d", (num1 - num2));
        break;
    case 3:
        printf("result is: %d", num1 * num2);
        break;
    case 4:
        result = (float)num1 / num2;
        printf("result is: %.2f", result);
        break;

    default:
        printf("not a valid operation! \n");
    }
}