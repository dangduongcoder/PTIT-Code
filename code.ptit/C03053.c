#include <stdio.h>


int nt[10000000];

void snt() {

    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2 ; i < 10000000 ; i ++) {
        nt[i] = 1;
    }

    for (int i = 2 ; i*i < 10000000 ; i ++) {
        if (nt[i] == 1) {
            for (int j = i * i; j < 10000000; j += i) {
                nt[j] = 0;
            }
        }
    }

}

int main () {

    snt();

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 2 ; j <= arr[i] / 2 ; j ++) {
            if (nt[j] == 1 && nt[arr[i] - j]) {
                printf("%d %d ", j, arr[i] - j);
            }
        }
        printf("\n");
    }

    return 0;
}
