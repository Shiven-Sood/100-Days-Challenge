//  Multiply two matrices.
#include <stdio.h>

int main() {
    int n1, m1, n2, m2;
    
    scanf("%d %d", &n1, &m1);
    int A[n1][m1];
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < m1; j++)
            scanf("%d", &A[i][j]);

    scanf("%d %d", &n2, &m2);
    int B[n2][m2];
    for (int i = 0; i < n2; i++)
        for (int j = 0; j < m2; j++)
            scanf("%d", &B[i][j]);

    if (m1 != n2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int C[n1][m2];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
