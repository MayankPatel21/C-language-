#include<stdio.h>
int main()
{
    float unit,total;
    printf("Enter the total unit consumed by the user : ");
    scanf("%f",&unit);
    
    if((unit>0)&&(unit<=100))
    {
        total=unit*0.50;
        printf("The charge you have to pay is : %f",total);
    }
    else if((unit>=101)&&(unit<=300))
    {
        total=(100*0.50)+((unit-100)*0.75);
        printf("The charge you have to pay is : %f",total);
    }
    else if((unit>=301)&&(unit<=500))
    {
        total=(100*0.50)+(200*0.75)+((unit-300)*1.20);
        printf("The charge you have to pay is : %f",total);
    }
    else
    {
        total=(100*0.50)+(200*0.75)+(200*1.20)+((unit-500)*1.50);
        printf("The charge you have to pay is : %f",total);
    }
}
