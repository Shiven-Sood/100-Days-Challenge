//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
};
enum Operation getOperation(const char* opStr) {
    if (strcmp(opStr, "ADD") == 0) return ADD;
    if (strcmp(opStr, "SUBTRACT") == 0) return SUBTRACT;
    if (strcmp(opStr, "MULTIPLY") == 0) return MULTIPLY;
    return INVALID;
}
int main() {
    char operation[10];
    int a, b;
    scanf("%s %d %d", operation, &a, &b);
    
    enum Operation op = getOperation(operation);
    int result;
    
    switch (op) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }
    
    printf("%d\n", result);
    return 0;
}