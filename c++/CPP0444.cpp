//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n, k, t;
    cin >> n >> k;

    int r = 0;

    for (int i = 1 ; i <= n ; i ++) {
        cin >> t;
        if (t == k) {
            r = i;
        }
    }

    cout << r << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}