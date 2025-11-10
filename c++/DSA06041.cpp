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
const int N = 1e5+7;

void solve() {

    int n;
    cin >> n;

    int cnt[N];

    memset(cnt, 0, sizeof(cnt));

    rep(i, 0, n) {
        int a; cin >> a;
        cnt[a] ++;
    }

    int res = -1;
    int index = -1;

    rep(i, 0, N) {
        if (cnt[i] > n/2 && cnt[i] > res) {
            index = i;
            res = cnt[i];
        }
    }

    cout << ((index == -1) ? "NO" : to_string(index)) << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}