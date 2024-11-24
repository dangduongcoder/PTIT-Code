#include <stdio.h>

int nt[2000000 + 1];

void init() {
    for (int i = 0; i <= 2000000; i++) {
        nt[i] = 1;
    }

    nt[0] = nt[1] = 0;

    for (int i = 2; i * i <= 2000000; i++) {
        if (nt[i]) {
            for (int j = i * i; j <= 2000000; j += i) {
                nt[j] = 0;
            }
        }
    }
}

long long calc(long long n) {
    long long sum = 0;

    for (int i = 2; i * i <= n; i++) {
        if (nt[i]) {
            while (n % i == 0) {
                sum += i;
                n /= i;
            }
        }
    }

    if (n > 1) {
        sum += n;
    }

    return sum;
}

int main() {
    init();

    int n;
    scanf("%d", &n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long t;
        scanf("%lld", &t);
        sum += calc(t);
    }

    printf("%lld\n", sum);

    return 0;
}
