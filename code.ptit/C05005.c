#include <stdio.h>


void solve(int index) {


    printf("Test %d:\n", index);

    int n, m;

    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 1 ; i < n ; i ++) {
        for (int j = 1 ; j < m ; j ++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


}


int main() {


    int n;
    scanf("%d", &n);

    for (int i = 1 ; i <= n ; i ++) {
        solve(i);
    }


    return 0;
}

