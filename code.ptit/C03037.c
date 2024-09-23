#include <stdio.h>


int main () {


    long long int n;

    scanf("%lld", &n);

    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    while (n != 0) {
        int t = n % 10;
        if (t == 2 || t == 3 || t == 5 || t == 7) {
            arr[t] ++;
        }

        n /= 10;
    }

    for (int i = 0 ; i < 10 ; i ++) {
        if (arr[i] > 0) {
            printf("%d %d", i, arr[i]);
        }
    }

    return 0;
}
