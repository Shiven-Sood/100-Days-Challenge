// Write a program to check if a number is a strong number.
#include <stdio.h>
int main() 
{
    int num, temp, digit, sum = 0, fact, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) 
    {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) 
        {
            fact *= i;
        }
        sum += fact;
        temp = temp / 10;
    }
    if (sum == num) 
    {
        printf("%d is a Strong Number.\n", num);
    } else 
    {
        printf("%d is Not a Strong Number.\n", num);
    }
       return 0;
}
