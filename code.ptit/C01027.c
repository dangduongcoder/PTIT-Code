


#include <stdio.h>




int main () {

    int n, t;

    scanf("%d", &n);

    int arr[n][2];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }

    for (int i = 0 ; i < n ; i ++) {
        int a = arr[i][0];
        int b = arr[i][1];

        while (b != 0) {
            t = b;
            b = a % b;
            a = t;
        }

        printf("%d\n", a);
    }

    return 0;
}









