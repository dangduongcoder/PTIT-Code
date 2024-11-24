#include <stdio.h>


int nt[1000 + 1];

void init() {

    for (int i = 0 ; i <= 1000 ; i ++) {
        nt[i] = 1;
    }

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i * i <= 1000 ; i ++) {
        if (nt[i]) {
            for (int j = i * i ; j <= 1000 ; j += i) {
                nt[j] = 0;
            }
        }
    }

}



int main() {

    init();

    int n;
    scanf("%d", &n);

    int arr[n][n];
    int mark[n];
    int max = 0;

    for (int i = 0 ; i < n ; i ++) {
        mark[i] = 0;
        for (int j = 0 ; j < n ; j ++) {
            scanf("%d", &arr[i][j]);
            if (nt[arr[i][j]] != 0) {
                mark[i] ++;
                nt[arr[i][j]] ++;
            }
            if (mark[i] > max) {
                max = mark[i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (mark[i] == max) {
            printf("%d\n", i + 1);
            for (int j = 0; j < n; j++)
            {
                if (nt[arr[i][j]] != 0) {
                    printf("%d ", arr[i][j]);
                }
            }
            
            break;
        }
    }
    

}