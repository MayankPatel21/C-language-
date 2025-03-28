#include<stdio.h>
int main()
{
    int i,j;
    int n=6;
    for(int i=n/2 ; i<n ;i+=2)
    {
        for(int j=0;j<n-i;j+=2)
        {
           printf(" ");
        }
        for(int j=0;j<i;j++)
        {
           printf("*");
        }
        for(int j=0;j<n-i;j++)
        {
           printf(" ");
        }
        for(int j=0;j<i;j++)
        {
           printf("*");
        }
        printf("\n");
    }


    for(int i=0;i<7;i++)
    {
       for(int k=0;k<i; k++)
       {
          printf(" ");
       }
       for(int j=0;j<13-(2*i); j++)
       {
          printf("*");
       }
       printf("\n");
    }
}
