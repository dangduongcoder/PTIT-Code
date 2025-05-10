//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int il = 0, ir = 0;

    int t = 0;

    for (int i = 0 ; i < m ; i ++) {
        if (t) {
            if (ir < r) {
                ir ++;
                t = 0;
            } else {
                if (il > l) {
                    il --;
                    t = 0;
                }
            }
        } else {
            if (il > l) {
                il --;
                t = 1;
            } else {
                if (ir < r) {
                    ir ++;
                    t = 1;
                }
            }
        }
    }

    cout << il << " " << ir << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}