#include <stdio.h>


int main() {

    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1 ; i < n ; i ++) {
        for (int j = 0 ; j < i ; j ++) {
            if (arr[j] < arr[i]) {
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        printf("%d ", arr[i]);
    }


}

