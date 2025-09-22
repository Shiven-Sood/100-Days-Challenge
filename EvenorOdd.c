// Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{
    int num ;
    printf("Enter a number :");
    scanf("%d",&num);
    
        if (num%2==0)
        {
            printf("The number is even ;%d\n", num);
        }
        else 
        {
            printf("The number is odd :%d\n",num);
        }
     
    return 0;
}
