#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping : nun1 : %d num2 : %d\n", a , b);
    return 0 ;
}
