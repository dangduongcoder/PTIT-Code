#include <stdio.h>




int main() {


    int n;
    scanf("%d", &n);

    int arr[n];

    int mark[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
        mark[i] = 0;
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j <= i ; j ++) {
            if (arr[j] == arr[i]) {
                mark[j] ++;
                break;
            }
        }
    }




    for (int i = 0 ; i < n ; i ++) {
        if (mark[i] > 0) {
            printf("%d %d\n", arr[i], mark[i]);
        }
    }




    return 0;
}

