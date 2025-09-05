#include <stdio.h>
int main() 
{
    int num, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original = num;
    while (num != 0) 
    {
        digit = num % 10;
        rev = rev * 10 + digit;    
        num = num / 10;          
    }
    printf("Original number = %d\n", original);
    printf("Reversed number = %d\n", rev);
    return 0;
}
