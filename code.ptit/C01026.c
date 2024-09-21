

#include <stdio.h>




int main () {

    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {

        if (arr[i] <= 1) {
            printf("NO\n");
        } else if (arr[i] < 4 ) {
            printf("YES\n");
        } else {
            int ok = 1;

            for (int j = 2 ; j <= (int)(sqrt(arr[i])) ; j ++) {
                if (arr[i] % j == 0) {
                    ok = 0;
                    break;
                }
            }

            if (ok == 1) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }



    }

    return 0;
}









