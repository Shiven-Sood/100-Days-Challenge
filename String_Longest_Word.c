// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000
#define MAX_WORD_LEN 100
void findLongestWord(char sentence[], char longestWord[]) {
    int maxLength = 0;
    char currentWord[MAX_WORD_LEN];
    int i = 0, j = 0;

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            currentWord[j++] = sentence[i];
        } else {
            if (j > maxLength) {
                maxLength = j;
                currentWord[j] = '\0';
                strcpy(longestWord, currentWord);
            }
            j = 0;
        }
        if (sentence[i] == '\0' || sentence[i] == '\n') {
            break;
        }
        i++;
    }
}
int main() {
    char sentence[MAX_LEN];
    char longestWord[MAX_WORD_LEN] = "";

    printf("Enter a sentence: ");
    fgets(sentence, MAX_LEN, stdin);

    findLongestWord(sentence, longestWord);

    if (strlen(longestWord) > 0) {
        printf("The longest word is: %s\n", longestWord);
    } else {
        printf("No words found in the sentence.\n");
    }

    return 0;
}
