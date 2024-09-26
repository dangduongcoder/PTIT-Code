#include <stdio.h>

int main () {


    int n;

    scanf("%d", &n);

    int arr[50];

    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;

    int c = 3;

    while (c <= n) {
        c ++ ;
        arr[c] = arr[c - 1] + arr[c - 2];

        if (arr[c] == n) {
            printf("1");
            break;
        } else if (arr[c] > n){
            printf("0");
            break;
        }
    }



    return 0;
}

