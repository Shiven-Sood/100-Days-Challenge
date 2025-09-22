// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.

#include<stdio.h>
int main()
{
    float percentage; 
    printf("Enter a Percentage :");
    scanf("%f",&percentage);
    if ( percentage<=100 && percentage>=90)
    {
        printf("The Grade is = %f(A) ",percentage);
    }
    else if (percentage<=89 && percentage>=80)
    {
        printf("The Grade is = %f(B)", percentage);
    }
    else if (percentage<79 && percentage>=70)
    {
        printf("The Grade is = %f(C)",percentage);
    }
    else if (percentage<=69 && percentage>=60)
    {
        printf("The Grade is = %f(F)",percentage);
    }
    else if (percentage < 60)
    {
        printf("The Grade is = %f(F)",percentage);
    }
    return 0;
}
