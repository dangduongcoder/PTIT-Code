//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

// const int N = 1e3 + 5;

#define int long long

void solve() {
    // ll cnt[N];


    int a, b, c;

    ll t;
    cin >> a >> b >> c;

    unordered_set<ll> se1, se2, se3;

    for (int i = 0 ; i < a ; i ++) {
        cin >> t;
        se1.insert(t);
    }

    for (int i = 0 ; i < b ; i ++) {
        cin >> t;
        if (se1.count(t)) {
            se2.insert(t);
        }
    }

    for (int i = 0 ; i < c ; i ++) {
        cin >> t;
        if (se2.count(t)) {
            se3.insert(t);
        }
    }

    vector<ll> r(se3.begin(), se3.end());

    if (r.size() < 1) {
        cout << -1 << endl;
        return;
    }

    sort(r.begin(), r.end());

    for (ll i : r) {
        cout << i << " ";
    }

    cout << endl;
}

int32_t main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}