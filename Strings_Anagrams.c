//  Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_LEN 100
#define CHAR_COUNT 256

int main() {
    char str1[MAX_LEN], str2[MAX_LEN];
    int count[CHAR_COUNT] = {0};
    bool areAnagrams = true;

    printf("Enter first string: ");
    fgets(str1, MAX_LEN, stdin);
    printf("Enter second string: ");
    fgets(str2, MAX_LEN, stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    if (strlen(str1) != strlen(str2)) {
        areAnagrams = false;
    } else {
        for (int i = 0; str1[i] && str2[i]; i++) {
            count[tolower((unsigned char)str1[i])]++;
            count[tolower((unsigned char)str2[i])]--;
        }

        for (int i = 0; i < CHAR_COUNT; i++) {
            if (count[i] != 0) {
                areAnagrams = false;
                break;
            }
        }
    }

    if (areAnagrams) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
