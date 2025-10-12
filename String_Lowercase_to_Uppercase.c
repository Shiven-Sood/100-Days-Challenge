// Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[50];
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
    printf("Uppercase string: %s\n", str);
    return 0;
}
