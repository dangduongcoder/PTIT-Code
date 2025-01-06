#include <stdio.h>


int main() {

    int n;
    printf("Nhap so luong so trong day : ");
    scanf("%d", &n);

    int arr[n];
    int chan = 1;

    for (int i = 1 ; i <= n ; i ++) {
        printf("\nNhap so thu %d : ", i);
        scanf("%d", &arr[i - 1]);
        if (arr[i - 1] % 2 != 0) {
            chan = 0;
        }
    }

    if (!chan) printf("\nDay so khong toan cac so chan\n");
    else printf("\nDay so toan cac so chan\n");

    for (int i = 0 ; i < n - 1 ; i ++) {
        for (int j = i + 1 ; j < n ; j ++) {
            if (arr[i] < arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    printf("Day so duoc sap xep giam dan: \n");

    for (int i = 0 ; i < n ; i ++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
