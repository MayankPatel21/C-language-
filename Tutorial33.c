#include<stdio.h>
//AREA OF CIRCLE
int main()
{
    
    int r,area;
    printf("Enter the radius of Circle : ");
    scanf("%d",&r);
    
    area = (3.14*r*r);
    printf("The area of Circle is : %d",area);
    return 0;
}
