// Find sum of each row in an array and store it in another array.
#include <stdio.h>
#define MAX 100 

int main() {
    int rows, cols;
    int matrix[MAX][MAX];
    int rowSums[MAX] = {0};

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    return 0;
}
