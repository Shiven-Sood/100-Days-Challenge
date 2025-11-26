// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char text[256];

    printf("Enter the filename to append text: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);
    fputs(text, file);
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}