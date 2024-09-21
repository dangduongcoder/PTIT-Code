#include <stdio.h>

int main() {


    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i  < n ; i ++) {
        int t = arr[i];
        int p = t/2;

        for (int j = 2 ; j <= p ; j ++) {
            while(t % j == 0) {
                printf("%d ", j);
                t /= j;
                //printf(" (%d) ", t);
            }
        }
        printf("\n");
    }


    return 0;
}

