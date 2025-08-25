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

    int n, m;
    cin >> n >> m;

    int A[n], B[m];

    rep(i, 0, n) cin >> A[i];
    rep(i, 0, m) cin >> B[i];

    int cnt[N];

    memset(cnt, 0, sizeof(cnt));

    rep(i, 0, n) cnt[A[i]] ++;
    rep(i, 0, m) cnt[B[i]] ++;

    rep(i, 0, N) {
        if (cnt[i] > 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    rep(i, 0, N) {
        if (cnt[i] > 1) {
            cout << i << " ";
        }
    }

    cout << endl;


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}