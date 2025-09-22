// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() 
{
    int a, b, result;
    char op;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &b);
    switch(op) 
    {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error: Division by zero not allowed!\n");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error: Modulo by zero not allowed!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }
    return 0;
}
