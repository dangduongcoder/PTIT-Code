//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int N = 1e5 + 7;

void solve() {
    int n, m, t;

    cin >> n >> m;

    int cnt[N];

    memset(cnt, 0, sizeof(cnt));

    for (int i = 0 ; i < n + m ; i ++) {
        cin >> t;
        cnt[t] ++;
    }

    for (int i = 0 ; i < N ; i ++) {
        if (cnt[i] > 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    for (int i = 0 ; i < N ; i ++) {
        if (cnt[i] > 1) {
            cout << i << " ";
        }
    }
    cout << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}