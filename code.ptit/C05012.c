#include <stdio.h>

int test = 1;

int solve(){

    printf("Test %d:\n", test++);

    int n;
    scanf("%d", &n);

    int arr[n][n];
    int matrix[n][n];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            if (j <= i) {
                arr[i][j] = j + 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j++) {
            int sum = 0;
            for (int k = 0 ; k < n ; k ++) {
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