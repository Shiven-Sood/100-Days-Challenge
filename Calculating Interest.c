// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main()
{
    float SI , CI , P , R ,T , A;
    printf("Enter the Principle amount :");
    scanf("%f",&P);
    printf("Enter the Rate per annum :");
    scanf("%f",&R);
    printf("Enter the Time period in days :");
    scanf("%f",&T);
    printf("\nThe Simple Interest:\n");
    SI = (P*R*T)/100.00;
    printf("The SI is = %f\n",SI);
    printf("\nThe Compound Interest:\n");
    A =  P*pow(1+(R/100),T);
    CI = A-P;
    printf("The Amount is = %f\n",A);
    printf("The CI is = %f\n",CI);
    return 0;
    
}
