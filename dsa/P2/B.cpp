#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; i>=b; --i)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;
const int N = 1e9+7;

int cnt(int a, int b) {

    int minv = min(a, b);
    int maxv = max(a, b);

    if (maxv <= 2 * minv) return 0;

    int steps = 0;
    ll cur = minv;

    while(cur * 2 < maxv) {
        cur *= 2;
        steps ++;
    }

    return steps;
}

void solve() {


    int n;
    cin >> n;

    vector<int> a(n);

    rep(i, 0, n) cin >> a[i];

    int res = 0;

    rep(i, 0, n - 1) {
        res += cnt(a[i], a[i + 1]);
    }

    cout << res << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}