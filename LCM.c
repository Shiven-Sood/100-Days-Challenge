// Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() 
{
    int a, b, x, y, temp, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a; 
    y = b;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;
    lcm = (a * b) / hcf;
    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);
    return 0;
}
