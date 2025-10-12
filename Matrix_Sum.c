// Find the sum of all elemnts in a matricx.
#include <stdio.h>
#define MAX 100

int main() {
    int rows, cols;
    int matrix[MAX][MAX];
    int sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Output: %d\n", sum);

    return 0;
}
