#include <stdio.h>


int main () {

    int n ;
    scanf("%d", &n);

    int arr[n][101];

    int t = 0;

    for (int i = 0 ; i < n ; i ++) {

        scanf("%d", &arr[i][0]);
        arr[i][1] = 0;
        for (int j = 1 ; j <= arr[i][0] ; j ++) {
            scanf("%d", &t);
            if (t % 2 == 0) {
                arr[i][1] ++;
                arr[i][arr[i][1] + 1] = t;
            }
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < arr[i][1] ; j ++) {
            printf("%d ", arr[i][j + 2]);
        }
        printf("\n");
    }


    return 0;
}
