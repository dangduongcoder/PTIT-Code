#include <stdio.h>



int main() {

    int n;
    scanf("%d", &n);


    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    int m = -9999999;
    int lm = m;


    for (int i = 0 ; i < n ; i ++) {
        if (arr[i] > m) {
            //lm = m;
            m = arr[i];
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        if (arr[i] > lm && arr[i] < m) {
            //lm = m;
            lm = arr[i];
        }
    }

    printf("%d %d", m, lm);

}
