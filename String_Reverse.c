//  Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int len, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);
    for (i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';

    printf("Reversed string: %s\n", reversed);
    return 0;
}
