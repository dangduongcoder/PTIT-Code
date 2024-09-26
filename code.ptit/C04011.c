#include <stdio.h>


int main () {


    int n ;

    scanf("%d", &n);

    long long int arr[n][52];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%lld", &arr[i][0]);
        for (int j = 1 ; j <= arr[i][0] ; j ++) {
            scanf("%lld", &arr[i][j]);
        }




    }


    for (int i = 0 ; i < n ; i++) {
        int c = 1;

        for (int j = 2 ; j <= arr[i][0]; j++) {
            //if (arr[i][j + 1] >= arr[i][j]) {
            //    c++;
            //}

            int ok = 1;

            for (int k = 1; k < j ; k ++) {
                if (arr[i][j] < arr[i][k]) {
                    ok = 0;
                    //printf("= %d %d %d=\n", j, arr[i][j], arr[i][k]);
                    break;
                }
            }
            if (ok) {
                //printf("(%d - %d)\n", arr[i][j], j);
                c ++;
            }


            //printf("(%d, %d) ", arr[i][j], arr[i][j + 1]);
        }
        //printf("%d %d\n", arr[i][0], c);
        printf("%d\n", c);
    }

    return 0;
}
