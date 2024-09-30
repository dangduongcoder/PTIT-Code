#include <stdio.h>


int main() {


    int n, p;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &p);

    for (int i = p % n ; i < n ; i ++) {
        printf("%d ", arr[i]);
    }

    for (int i = 0 ; i < p % n ; i ++) {
        printf("%d ", arr[i]);
    }




    return 0;
}
