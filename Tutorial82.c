#include<stdio.h>
int main()
{
    int age,time;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age<12)
    {
        printf("You are a child ");
        printf("\n");
        printf("Enter time : ");
        scanf("%d",&time);
        if(time<5)
        {
            printf("The ticket price is 5$");
        }
        else{
            printf("The ticket price is 7$");
        }
    }
    else if((age>12)&&(age<59))
    {
        printf("You are an adult ");
        printf("\n");
        printf("Enter time : ");
        scanf("%d",&time);
        if(time<5)
        {
            printf("The ticket price is 10$");
        }
        else{
            printf("The ticket price is 12$");
        }
    }
    else if(age>=60)
    {
        printf("You are an Seniors citizen ");
        printf("\n");
        printf("Enter time : ");
        scanf("%d",&time);
        if(time<5)
        {
            printf("The ticket price is 6$");
        }
        else{
            printf("The ticket price is 8$");
        }
    }
}
