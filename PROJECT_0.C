#include<stdio.h>

int main()
{
    int a;
    printf("The multiplcation table of ");
    scanf("%d",&a);
    
    
    for(int i=1;i<=10;i++)
    {
        printf("%d × %d = %d ",a,i,a*i);
        printf("\n");
    }
    return 0;
}
