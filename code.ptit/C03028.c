#include <stdio.h>



int gt(int n) {

    if (n == 0) {
        return 1;
    }

    if (n == 1) {
        return 1;
    } else {
        return n * gt(n - 1);
    }
}

int get(int n, int k) {
    return gt(n)/(gt(k) * gt(n - k));
}

int main() {

    int n;

    scanf("%d", &n);

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0; j <= i ; j ++) {
            printf("%d ", get(i, j));
        }
        printf("\n");
    }

    return 0;
}