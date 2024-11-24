#include <stdio.h>

int main() {


    int u, d, n;
    scanf("%d %d %d", &u, &d, &n);

    long long sum = u;

    for (int i = 1; i <= n - 1 ; i ++) {
        u += d;
        sum += u;
    }

    printf("%lld", sum);

    return 0;
}