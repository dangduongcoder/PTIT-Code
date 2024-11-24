#include <stdio.h>

int test = 1;

int solve(){

    printf("Test %d:\n", test++);

    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int matrix[n][n];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j++) {
            int sum = 0;
            for (int k = 0 ; k < m ; k ++) {
                sum += arr[i][k] * arr[j][k];
            }
            matrix[i][j] = sum;
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            printf("%d ", matrix[i][j]);
        } 
        printf("\n");
    }

}

int main() {


    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    


    return 0;
}