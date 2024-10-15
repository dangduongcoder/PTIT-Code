#include <stdio.h>

int check(long long n) {

    if (n <=3) {
        return 0;
    }

    int c = 0;

    for (int i = 2; i * i <= n ; i ++) {
        if (n % i == 0) {
            if (i * i == n) {
                c++;
            } else {
                c += 2;
            }
        }
    }

    if (c == 1) {
        return 1;
    } else {
        return 0;
    }
} 


void solve() {

    long long l, r;
    scanf("%lld %lld", &l, &r);

    long long c = 0;

    for (long long i = l ; i <= r ; i ++) {
        if (check(i)) {
            c ++;
        }
    }
    printf("%d\n", c);

}


int main () {

    int n;
    scanf("%d", &n);

    while (n--)
    {
        solve();
    }
    

    return 0;
}
