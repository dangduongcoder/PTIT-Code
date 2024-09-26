#include <stdio.h>

int main () {


    int n;

    scanf("%d", &n);

    int arr[50];

    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;

    int c = 3;

    if (n > 3) {
        while (c <= n) {
            c ++ ;
            arr[c] = arr[c - 1] + arr[c - 2];
        }
    }

    for (int i = 1 ; i <= n ; i ++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
