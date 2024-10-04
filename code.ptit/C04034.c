#include <stdio.h>

void solve() {


    int n;
    int c = 0;

    scanf("%d", &n);

    int arr[n];
    int res[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        int ok = 1;
        for (int j = i + 1; j < n; j ++) {
            if (arr[i] <= arr[j]) {
                ok = 0;
                break;
            }
        }
        if (ok == 1) {
            //printf("%d ", arr[i]);
            res[c] = arr[i];
            c ++;
        }
    }

    for (int i = 1 ; i < c ; i ++) {
        for (int j = 0 ; j < i ; j++){
            if (res[j] < res[i]) {
                int t = res[j];
                res[j] = res[i];
                res[i] = t;
            }
        }
    }

    for (int i = 0 ; i < c ; i ++) {
        printf("%d ", res[i]);
    }

    printf("\n");

}


int main() {

    int n;
    scanf("%d", &n);

    while ( n --) {
        solve();
    }

    return 0;
}
