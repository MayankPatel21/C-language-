#include<stdio.h>
int main()
{
    int marks;
    
    printf("Enter your marks : ");
    scanf("%d",&marks);
    
    if((marks>=90)&&(marks<=100))
    {
        printf("Grade A : Excellent");
    }
    
    else if((marks>=80)&&(marks<=89))
    {
        printf("Grade B : Very good");
    }
    
    else if((marks>=70)&&(marks<=79))
    {
        printf("Grade C : Good");
    }
    
    else if((marks>=60)&&(marks<=69))
    {
        printf("Grade D : Satisfactory");
    }
    
    else if((marks>=50)&&(marks<=59))
    {
        printf("Grade E : Need improvement");
    }
    
    else if((marks>0)&&(marks<50))
    {
        printf("Grade F : Fail;(");
    }
    
    else
    {
        printf("Error! Marks should be between 0 to 100");
    }
    
    return 0;
}
