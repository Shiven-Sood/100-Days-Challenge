// Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() 
{
    int num, temp, binary = 0, place = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    if (num == 0) 
    {
        printf("Binary: 0\n");
        return 0;
    }
    while (temp > 0) 
    {
        int digit = temp % 2;
        binary = binary + digit * place;
        place = place * 10;
        temp = temp / 2;
    }

    printf("Binary: %d\n", binary);

    return 0;
}
