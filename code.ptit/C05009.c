#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        int t = matrix[i][i];
        matrix[i][i] = matrix[i][n - i - 1];
        matrix[i][n - i - 1] = t;
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}