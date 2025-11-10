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

void solve() {

    int n;
    cin >> n;

    int a, b;

    vector<pii> v;

    rep(i, 0, n) {
        cin >> a >> b;
        v.push_back({b, a});
    }

    sort(all(v));

    int res = 1;
    int l = v[0].first;

    rep(i, 1, sz((v))) {
        if (v[i].second >= l) {
            l = v[i].first;
            res ++;
        }
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