#include<stdio.h>
int main()
{
    int years,salary;
    printf("Enter years of services you have made : ");
    scanf("%d",&years);
    printf("Enter your salary : ");
    scanf("%d",&salary);
    
    if(years<3)
    {
        printf("You will get no bonus\n");
        printf("Bonus amount is : %d",salary*0);
    }
    else if((years>=3)&&(years<=5))
    {
        printf("You will get bonus\n");
        printf("Bonus amount is : %d",(salary*5)/100);
    }
    else if((years>=6)&&(years<=10))
    {
        printf("You will get bonus\n");
        printf("Bonus amount is : %d",(salary*10)/100);
    }
    else
    {
        printf("You will get bonus\n");
        printf("Bonus amount is : %d",(salary*15)/100);
    }
}
