#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the 1st number");
    scanf("%f",&a);
    printf("Enter the 2nd number");
    scanf("%f",&b);
    
    printf("\nResult:\n");
    printf("Sum = %.2f\n",a+b);
    printf("Difference = %.2f\n",a-b);
    printf("Product = %.2f\n",a*b);
    if(b!=0)
    printf("Quotient = %.2f\n",a/b);
    else
    printf("Quotient = Invalid(DIVIDED BY 0)");
    return 0;
}
