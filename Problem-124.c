// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    int ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Could not open source file %s\n", sourceFile);
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Could not open destination file %s\n", destFile);
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", destFile);

    fclose(src);
    fclose(dest);

    return 0;
}