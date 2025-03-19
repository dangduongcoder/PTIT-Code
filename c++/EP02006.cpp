//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, m;
    cin >> n >> m;

    int a[n + 1], b[m + 1];
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    for (int i = 1; i <= m; i++) {
        cin >> b[i];
        b[i] += b[i - 1];
    }

    int res = 0;
    for (int i = 1; i <= min(n, m); i++) {
        res = max(res, max(a[i] + b[m] - b[i], b[i] + a[n] - a[i]));
    }

    cout << res << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}