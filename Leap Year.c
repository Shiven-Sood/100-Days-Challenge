#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    if ( year%4 ==0)
    {
        printf("The year is a leap year :%d\n", year);
    }
    else if (year%100 == 0)
    { 
        printf("The year is not a leap year :%d\n", year);
    }
    else 
    {
        printf("The year is not a leap year : %d\n", year);
    }
    return 0;
}
