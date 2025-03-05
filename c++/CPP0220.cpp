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

    int t;

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            cin >> t;

            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << t << " ";
            } else {
                cout << "  ";
            }
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