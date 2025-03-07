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

    vector<pair<int, int>> v;

    int x, y;

    for (int i = 0 ; i < n ; i ++) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    v.push_back(v[0]);

    ll s = 0;

    for (int i = 0 ; i < n ; i ++) {
        s += v[i].first * v[i+1].second - v[i+1].first * v[i].second;
    }

    cout << fixed << setprecision(3) << 0.5 * abs(s) << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}