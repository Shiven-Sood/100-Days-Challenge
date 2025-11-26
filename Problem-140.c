// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    enum Gender gender;
};
int main() {
    printf("Enter gender (0 for MALE, 1 for FEMALE, 2 for OTHER): ");
    int gender_input;
    scanf("%d", &gender_input);
    struct Person person = { .gender = gender_input };
    if (person.gender == MALE) {
        printf("Male\n");
    } else if (person.gender == FEMALE) {
        printf("Female\n");
    } else {
        printf("Other\n");
    }
    return 0;
}