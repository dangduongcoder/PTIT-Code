

#include<stdio.h>



int main() {


    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        int t;
        scanf("%d", &t);
        int ok = 1;

        int tarr[t];

        for (int j = 0 ; j < t ; j ++) {
            scanf("%d", &tarr[j]);
        }

        for (int j = 0 ; j < t/2 ; j ++) {
            if (tarr[j] != tarr[t - j - 1]) {
                ok = 0;
            }
        }

        arr[i] = ok;
    }

    for (int i = 0 ; i < n ; i ++) {
        if (arr[i] == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }


    return 0;
}






