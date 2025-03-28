#include<stdio.h>
int main()
{
    int x,n,count=0;
    
    while(count<2)
    {
    printf("Enter 0 for triangular star pattern and 1 for reverse pattern : ");
    scanf("%d",&x);
    if(x==0)
    {
        printf("Enter n: ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<=i;j++)
           {
              printf("*");
           }
           printf("\n");
        }
    }
    else if(x==1)
    {
        printf("Enter n: ");
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n-i;j++)
           {
              printf("*");
           }
           printf("\n");
        }
    }
    else
    {
       printf("Enter a valid number!!");
    }
    count++;
    }
}
