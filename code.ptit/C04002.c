#include <stdio.h>


int nt[1001];

void snt() {

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i < 1001 ; i ++) {
        nt[i] = 1;
    }

    for (int i = 2 ; i*i < 1001 ; i ++) {
        if (nt[i] == 1) {
            for (int j = i * i; j < 1001; j += i) {
                nt[j] = 0;
            }
        }
    }

}


int main () {

    snt();

    int n ;
    scanf("%d", &n);

    int arr[n][101];

    for (int i = 0 ; i < n ; i ++ ) {
        scanf("%d", &arr[i][0]);

        for (int j = 1 ; j <= arr[i][0] ; j ++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0 ; i < n ; i ++ ) {
        int l = arr[i][0];

        for (int j = 1 ; j <= l ; j ++) {
            if (nt[arr[i][j]] == 1) {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }



    return 0;
}
