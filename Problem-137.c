//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>
enum UserRole {
    ADMIN,
    USER,
    GUEST,
    INVALID_ROLE
};
enum UserRole getUserRole(const char* roleStr) {
    if (strcmp(roleStr, "ADMIN") == 0) return ADMIN;
    if (strcmp(roleStr, "USER") == 0) return USER;
    if (strcmp(roleStr, "GUEST") == 0) return GUEST;
    return INVALID_ROLE;
}
int main() {
    char role[10];
    printf("Role entered: %s\n", role);
    scanf("%s", role);
    
    enum UserRole userRole = getUserRole(role);
    
    switch (userRole) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role\n");
            return 1;
    }
    
    return 0;
}