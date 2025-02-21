#include<stdio.h>
//AREA OF RECTANGLE
int main()
{
    
    int l,b,area;
    printf("Enter the length of Rectangle : ");
    scanf("%d",&l);
    printf("Enter the breadth of Rectangle : ");
    scanf("%d",&b);
    
    area = l*b;
    printf("The area of Rectangle is : %d",area);
    return 0;
}
