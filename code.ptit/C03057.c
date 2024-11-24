#include <stdio.h>

void solve() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long amin = 0, amax = 0, bmin = 0, bmax = 0;
    long long t = 1;

    while (a != 0) {
        int r = a % 10;
        amin += ((r == 6) ? 5 : r) * t;
        amax += ((r == 5) ? 6 : r) * t;
        t *= 10;
        a /= 10;
    }

    t = 1;

    while (b != 0) {
        int r = b % 10;
        bmin += ((r == 6) ? 5 : r) * t;
        bmax += ((r == 5) ? 6 : r) * t;
        t *= 10;
        b /= 10;
    }

    printf("%lld %lld\n", amin + bmin, amax + bmax);
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        solve();
    }

    return 0;
}
