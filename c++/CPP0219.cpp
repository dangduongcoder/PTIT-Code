//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, m, t;
    cin >> n >> m;

    int row[n], col[m];
    memset(row, 0, sizeof(row));
    memset(col, 0, sizeof(col));

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            cin >> t;
            row[i] += t;
            col[j] += t;
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            cout << !(row[i] == 0 && col[j] == 0) << " ";
        }
        cout << endl;
    }

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}