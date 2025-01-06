#include <bits/stdc++.h>

#define int long long

using namespace std;

bool nt (long long n) {
    if (n < 2) {
        return 0;
    }

    if (n == 2 || n == 3) {
        return 1;
    }

    for (int i = 2 ; i * i <= n ; i ++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

bool check (long long n) {
    int o = n;
    int ok = 1;
    int sum = 0;

    while (n != 0 && ok) {
        int r = n % 10;
        if (!(r == 2 || r == 3 || r == 5 || r == 7)) {
            ok = 0;
        }
        sum += r;
        n /= 10;
    }

    if (ok) {
        return nt(o) && nt(sum);
    } else {
        return 0;
    }
}

int32_t main() {

    int cnt = 0;
    cout << "{";
    for (int i = 0 ; i <= 999999999 ; i ++) {
        if (check(i)) {
            cout << i << ", ";
            cnt ++;
        }
    }
    cout << " }";
    cout << cnt;

    return 0;
}
