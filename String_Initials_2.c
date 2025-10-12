// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_NAME_LENGTH 100
void print_initials_with_surname(const char *name) {
    int len = strlen(name);
    int i, last_space_index = -1;
    
    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            last_space_index = i;
        }
    }
    
    for (i = 0; i < len; i++) {
        if (i == 0 || (name[i - 1] == ' ' && isalpha(name[i]))) {
            if (last_space_index == -1 || i < last_space_index) {
                printf("%c.", toupper(name[i]));
            }
        }
    }
    
    if (last_space_index != -1) {
        printf(" %s", name + last_space_index + 1);
    } else {
        printf(" %s", name);
    }
    
    printf("\n");
}
int main() {
    char name[MAX_NAME_LENGTH];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    print_initials_with_surname(name);
    return 0;
}
