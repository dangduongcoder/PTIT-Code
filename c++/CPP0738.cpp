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
    vector<int> a(n);
    for (int &x : a) cin >> x;

    long long steps = 0;

    while (true) {
        int zero = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1) {
                a[i]--;
                steps++;
            }
            if (a[i] == 0) zero++;
        }
        if (zero == n) break;
        for (int i = 0; i < n; i++) a[i] /= 2;
        steps++;
    }

    cout << steps << "\n";
}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}