#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    
    if((age>0)&&(age<=5))
    {
        printf("You will get free entry");
    }
    else if((age>5)&&(age<=12))
    {
        printf("You will have to pay 10$ for entry");
    }
    else if((age>12)&&(age<=59))
    {
        printf("You will have to pay 20$ for entry");
    }
    else
    {
        printf("You will have to pay 15$ for entry");
    }
}
