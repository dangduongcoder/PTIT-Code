#include <stdio.h>

void solve() {

    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int c = n * m ;
    int d = 0; // 0 : phải, 1 xuống, 2 trái, 3 lên
    int i = 0, j = 0;
    int maxi = n, maxj = m, mini = 0, minj = 0;


    while (c > 0)
    {   

        printf("%d ", arr[i][j]);

        if (d == 0) {
            if (j == maxj - 1) {
                d = 1;
                i ++;
                c --;
                continue;
            } else { 
                j ++;
                c --;
            }
        }

        if (d == 1) {
            if (i == maxi - 1) {
                d = 2;
                j --;
                c --;
                continue;
            } else { 
                i ++;
                c --;
            }
        }

        if (d == 2) {
            if (j == minj) {
                d = 3;
                i --;
                c --;
                continue;
            } else { 
                j --;
                c --;
            }
        }

        if (d == 3) {
            if (i == mini + 1) {
                d = 0;
                j ++;
                maxi --;
                maxj --;
                mini ++;
                minj ++;
                c --;
                continue;
            } else { 
                i --;
                c --;
            }
        }

        
        // c --;
    }

    printf("\n");
     
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