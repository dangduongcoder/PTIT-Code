//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int cnt = 0;

    for (int i = n ; i <= m ; i ++) {
        if (i % a == 0 || i % b == 0) {
            cnt ++;
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