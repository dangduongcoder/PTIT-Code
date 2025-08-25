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
    int k;
    bool ok = true;
    cin >> n >> k;
    int arr[n];
    rep(i, 0, n) cin >> arr[i];

    vector<vector<int>> vvi;
    vector<int> v;

    rep(i, 0, n) v.pb(0);

    do {
        vvi.pb(v);
        int cnt = 0;
        rep(i, 0, n) cnt += v[i];
        if (cnt == n) ok = false;
        for (int i = n - 1 ; i >= 0 ; i --) {
            if (v[i] == 0) {
                v[i] = 1;
                break;
            } else v[i] = 0;
        }
    } while(ok) ;

    int cnt = 0;

    rep(i, 0, sz(vvi)) {
        int sum = 0;
        rep(j, 0, n) sum += arr[j] * vvi[i][j];
        if (sum == k) {
            rep(j, 0, n) cout << (vvi[i][j] == 1 ? to_string(arr[j]) + " " : "");
            cout << endl;
            cnt ++;
        } 
    }

    cout << cnt << endl;

}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}