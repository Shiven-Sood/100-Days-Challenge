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
