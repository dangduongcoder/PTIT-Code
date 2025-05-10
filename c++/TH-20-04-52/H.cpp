//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int &i : v) {
        cin >> i;
    }

    int sz = 0 , b = 0 , res = 0;

    for (int i : v) {
        sz += i <= k;
    }

    for (int i = 0 ; i < sz ; i ++) {
        b += v[i] > k;
    }

    res = b;

    for (int i = 0, j = sz ; j < n ; i ++, j ++) {
        b -= v[i] > k;
        b += v[j] > k;
        res = min(res, b);
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