#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[n];
    int step = 1;

    for (int i = 0 ; i < n ; i ++) scanf("%d", &arr[i]);

    printf("Buoc 0: %d\n", arr[0]);

    for (int i = 1 ; i < n ; i ++) {
        for (int j = i ; j >= 1 ; j --) {
            if (arr[j] < arr[j - 1]) {
                int tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            } else {
                break;
            }
        }

        printf("Buoc %d: ", step++);
        for (int j = 0 ; j <= i ; j ++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
        
    }
    // printf("Buoc %d: ", step++);
    // for (int j = 0 ; j < n ; j ++) {
    //     printf("%d ", arr[j]);
    // }

    return 0;
}