#include <stdio.h>

int main() {

    int m, n;
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    for (int i = 0 ; i < m ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = 0 ; i < m ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            if (i == a - 1) {
                printf("%d ", matrix[b - 1][j]);
            } else if (i == b - 1) {
                printf("%d ", matrix[a - 1][j]);
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}