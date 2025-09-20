#include <stdio.h>
#include <string.h>
int main()
{
    char binary[100];
    int i;
    printf("Enter a binary number: ");
    scanf("%s", binary);
    for (i = 0; i < strlen(binary); i++) 
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else 
        {
            printf("Invalid input! Only 0 and 1 are allowed.\n");
            return 0;
        }
    }
    printf("1's Complement = %s\n", binary);
    return 0;
}
