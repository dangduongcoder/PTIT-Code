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

    int __min = N - 1, __max = 0;

    int cnt[N];
    memset(cnt, 0, sizeof(cnt));

    rep(i, 0, n) {
        int t;
        cin >> t;
        __min = min(t, __min);
        __max = max(t, __max);
        cnt[t] ++;
    }
    int res = 0;
    rep(i, __min, __max + 1){
        if (cnt[i] == 0) res ++;
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