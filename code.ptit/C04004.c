
#include <stdio.h>


long long int fibo[93];


void init_fibo() {
    fibo[1] = 0;
    fibo[1] = 1;
    fibo[2] = 1;

    for (int i = 3; i <= 92 ; i ++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

}

int main() {

    init_fibo();

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0 ; i < n ; i ++) {
        printf("%lld\n", fibo[arr[i]]);
    }

    return 0;
}
