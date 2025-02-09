
#include<stdio.h>
int main()
{
  int a; 
  float b;
  char x;
  printf("Enter the value of a : ");
  scanf("%d",&a);
  printf("Enter the value of b : ");
  scanf(" %f",&b);
  printf("Enter the value of c : ");
  scanf(" %c",&x);

  printf("The value of a is : %d\n",a);
  printf("The value of b is : %f\n",b);
  printf("The value of c is : %c\n",x);
  return 0;
}
