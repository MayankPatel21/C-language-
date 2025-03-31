#include<stdio.h>
int main()
{
   int bal,wit;
   printf("Enter the balance in your account : ");
   scanf("%d",&bal);
   printf("Enter the amount to withdraw from your account : ");
   scanf("%d",&wit);
   
   if(((wit%100)==0)&&(bal>=wit))
   {
      printf("It is valid number to withdraw ");
      printf("\n");
      bal-=wit;
      printf("\nTransaction Successful !!");
      printf("The balance after withdraw %d",bal);
   }
   else
   {
       printf("Enter a valid number ");
   }
}
