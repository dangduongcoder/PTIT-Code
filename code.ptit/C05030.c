#include <stdio.h>
#include <string.h>

int min(int a, int b){
    return a > b ? b : a;
}

void solve() {
    int n, m;
    scanf("%d %d\n", &n, &m);

    // int arr[n][m];

    char str[n][m];

    int row[n][3], col[m][3];

    for (int i = 0 ; i < n ; i ++) {
        row[i][0] = 0;
        row[i][1] = 0;
        row[i][2] = 0;
    }
    for (int i = 0 ; i < m ; i ++) {
        col[i][0] = 0;
        col[i][1] = 0;
        col[i][2] = 0;
    }
    
    char tmp[1009];

    for (int i = 0 ; i < n ; i ++) {
        gets(str[i]);
        for (int j = 0 ; j < m ; j ++) {
            // arr[i][j] = tmp[j] - '0';
            row[i][str[i][j] - '0'] ++;
            col[j][str[i][j] - '0'] ++;
        }
    }

    long long cnt = 0;

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            if (str[i][j] != '0') {
                if(row[i][(str[i][j] == '1') ? 2 : 1] > 0 && col[j][(str[i][j] == '1') ? 2 : 1] > 0) {
                    cnt+= row[i][str[i][j] == '1' ? 2 : 1] * col[j][str[i][j] == '1' ? 2 : 1];
                }
            }
        }
    }

    printf("%lld\n", cnt);
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