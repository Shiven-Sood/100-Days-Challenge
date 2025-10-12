// Q88: Replace spaces with hyphens in a string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];

    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            str[i] = '-';
        }
    }

    printf("Modified string: %s\n", str);
    return 0;
}
