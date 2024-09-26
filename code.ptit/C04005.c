
#include <stdio.h>


int main() {


    int n ;

    scanf("%d", &n);

    int arr[n][101];


    for (int i = 0 ; i < n ; i ++) {

        arr[i][1] = -1;

        scanf("%d", &arr[i][0]);

        for (int j = 1 ; j <= arr[i][0] ; j ++) {
            scanf("%d", &arr[i][j + 1]);
            if (arr[i][j + 1] > arr[i][1]) {
                arr[i][1] = arr[i][j + 1];
            }
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        printf("%d\n", arr[i][1]);

        for (int j = 0 ; j < arr[i][0] ; j ++) {
            if (arr[i][j + 2] == arr[i][1]) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }


    return 0 ;
}
