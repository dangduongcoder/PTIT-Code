#include <stdio.h>


int main() {

    int n;
    int cnt = 0;

    scanf("%d\n", &n);

    int arr[n][n];

    for (int i = 0 ; i < n ; i ++) {
        char s[n];
        gets(s);
        for (int j = 0 ; j < n ; j ++) {
            arr[i][j] = s[j] - '0';
        }
    }
    

    // for (int x = 0 ; x < n ; x ++){
    //             for (int y = 0 ; y < n ; y ++) {
    //                 printf("%d ", arr[x][y]);
    //             }
    //             printf("\n");
    //         }
    //         printf("\n");

    for (int i = n - 1 ; i >= 0 ; i --) {
        for (int j = n - 1 ; j >= 0 ; j -- ) {
            if (arr[i][j]) {
                for (int a = 0 ; a <= i ; a ++) {
                    for (int b = 0 ; b <= j ; b ++) {
                        arr[a][b] = !arr[a][b];
                    }
                }
                cnt ++;
        

            }

            
        }
    }

    printf("%d", cnt);

    return 0;
}