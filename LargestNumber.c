// Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main()
{
    int a , b , c ; 
    printf ("Enter 1st Number :") ; 
    scanf("%d",&a);
    printf("Enter 2nd Number :");
    scanf("%d",&b);
    printf("Enter 3rd Number :");
    scanf("%d",&c);
    if (a>=b && a >=c)
    {
        printf("The Largest Number is :%d",a);
    }
     else if (b>=a && b>=c) 
     {
         printf("The Largest Number is :%d",b);
     }
     else 
     {
         printf("The largest Number is :%d",c);
     }
}
