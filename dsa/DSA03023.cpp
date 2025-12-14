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

    int n; cin >> n;
    string s;
    cin >> s;
    int res = 0;
    
    
    int a[n];

    int cnt[4] = {0, 0, 0, 0};

    rep(i, 0, n) {
        if (s[i] == 'X') a[i] = 3;
        else if (s[i] == 'T') a[i] = 2;
        else a[i] = 1;
        cnt[a[i]] ++;
    }

    // rep(i, 0, n) cout << a[i];
    // cout << endl;

    int tar = 3;

    int l = 0;
    int r = 0;

    int m = 1;
    if (cnt[1] == 0) m = 2;
    if (cnt[1] == 0 && cnt[2] == 0) {
        cout << 0;
        return;
    }

    while ( tar > m) {
        if(cnt[tar] == 0) {
            tar --;
            continue;
        }
        rep(i, l, n) {
            if (a[i] != tar && tar > a[i]) {
                l = i;
                // cout << "Pick L = " << l << endl;
                break;
            }
        }

        rrep(i, n - 1, 0) {
            if (a[i] == tar) {
                r = i;
                // cout << "Pick R = " << r << endl;
                break;
            }
        }

        if (l > r) {
            tar --;
        } else {
            // cout << l << " " << r << endl;
            res ++;
            // swap(a[l], a[r]);
            int t = a[l];
            a[l] = a[r];
            a[r] = t;
        }

        // rep(i, 0, n) cout << a[i];
        // cout << endl;
    }



    cout << res;


}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}