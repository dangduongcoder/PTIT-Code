//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, t;
    cin >> n;

    int cnt[3] = {0, 0, 0};

    for (int i = 0 ; i < n ; i ++) {
        cin >> t;
        cnt[t] ++;
    }

    for (int i = 0 ; i < cnt[0]; i ++) {
        cout << 0 << " ";
    }

    for (int i = 0 ; i < cnt[1]; i ++) {
        cout << 1 << " ";
    }

    for (int i = 0 ; i < cnt[2]; i ++) {
        cout << 2 << " ";
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