#include<stdio.h>
int main()
{
    int a , b , temp;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping : num1 =%d num2 = %d\n",a ,b);
    return 0;
}
    
