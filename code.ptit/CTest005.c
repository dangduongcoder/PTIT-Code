#include <stdio.h>

int main () {


    int m, n, p;
    scanf("%d %d %d", &n, &m, &p);

    int arr1[n][m];
    int arr2[m][p];
    int tong[n][p];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0 ; i < m ; i ++) {
        for (int j = 0 ; j < p ; j ++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < p ; j ++) {
            int sum = 0;
            for (int k = 0 ; k < m ; k ++) {
                sum += arr1[i][k] * arr2[k][j];
            }
            tong[i][j] = sum;
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < p ; j ++) {
            printf("%d ", tong[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}