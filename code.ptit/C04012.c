#include <stdio.h>


int main() {


    int n;
    scanf("%d", &n);

    int arr[n];

    int mark[n];
    //int mark[1000000][2];

    //for (int i = 0 ; i < 1000000 ; i ++) {
    //   mark[i][0] = 0;
    //    mark[i][1] = 0;
    //}

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

    int c = 0;

    for (int i = 0 ; i < n ; i ++) {
        //printf("%d - %d\n", arr[i], mark[i]);
        if (mark[i] > 1) {
            printf("%d ", arr[i]);
            c++;
        }
    }

    if (c == 0) {
        printf("0");
    }



    return 0;
}
