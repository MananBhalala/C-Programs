#include <stdio.h>
void main()
{
  int age, n1, n2, n3, n4, max;

  /*printf("enter age : ");
  scanf("%d", &age);
  age >= 18 ? printf("adult \n"), printf("you can drive \n") : printf("not adult \n");

  printf("thank you \n");
  */

  printf("enter n1 : ");
  scanf("%d", &n1);
  printf("enter n2 : ");
  scanf("%d", &n2);
  printf("enter n3 : ");
  scanf("%d", &n3);
  printf("enter n4 : ");
  scanf("%d", &n4);

  max = (n1 > n2 && n1 > n3 && n1 > n4) ? n1 : ((n2 > n3 && n2 > n4) ? n2 : (n3 > n4 ? n3 : n4));

  printf("largest no is %d", max);
}