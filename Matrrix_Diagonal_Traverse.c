// Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int k = 0; k < n + m - 1; k++) {
        if (k % 2 == 0) {
            for (int i = 0; i <= k; i++) {
                int j = k - i;
                if (i < n && j < m) {
                    printf("%d ", a[i][j]);
                }
            }
        } else {
            
            for (int i = k; i >= 0; i--) {
                int j = k - i;
                if (i < n && j < m) {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    return 0;
}
