// Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, Palindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            Palindrome = 0;
            break;
        }
    }

    if (Palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
