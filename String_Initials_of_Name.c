//  Print the initials of a name.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_NAME_LENGTH 100
void print_initials(const char *name) {
    int len = strlen(name);
    int i;
    for (i = 0; i < len; i++) {
        if (i == 0 || (name[i - 1] == ' ' && isalpha(name[i]))) {
            printf("%c.", toupper(name[i]));
        }
    }
    printf("\n");
}
int main() {
    char name[MAX_NAME_LENGTH];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    print_initials(name);
    return 0;
}
