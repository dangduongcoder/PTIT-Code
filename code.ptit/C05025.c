#include <stdio.h>

int test = 1;

void solve() {

    printf("Test %d:\n", test++);

    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            scanf("%d", &arr[i][j]);
        }
    }


    for (int i1 = 0 ; i1 < n ; i1 ++) {
        for (int j1 = 0 ; j1 < m ; j1 ++) {
            for (int i2 = i1 ; i2 < n ; i2 ++) {
                for (int j2 = j1 ; j2 < m ; j2 ++) {
                    if (arr[i1][j1] > arr[i2][j2]) {
                        int t = arr[i1][j1];
                        arr[i1][j1] = arr[i2][j2];
                        arr[i2][j2] = t;
                    }
                }
            }
        }
    }

    
    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}

int main () {


    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    


    return 0;
}