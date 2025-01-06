#include <stdio.h>


int main () {


    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n - 1 ; i ++) {
        int min = i;
        for (int j = i ; j < n ; j ++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;

        for (int j = 0 ; j < n ; j ++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}