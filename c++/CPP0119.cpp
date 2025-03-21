//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;

    int cnt = n % 2 == 0;

    for (int i = 2 ; i * i <= n ; i ++) {
        if (n % i == 0) {
            cnt += (i % 2 == 0);
            cnt += ((n / i) % 2 == 0 && (i != (n/i)));
        }
    }

    cout << cnt << endl;
}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}