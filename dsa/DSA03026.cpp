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


    int n, k;
    cin >> k >> n;

    if (n == 0) {
        if (k == 1) cout << "0 0" << endl;
        else cout << "-1 -1" << endl;

        return;
    }

    if (k * 9 < n) {
        cout << "-1 -1" << endl;
        return;
    }

    int a[k];

    a[0] = 1;
    rep(i, 1, k) a[i] = 0;

    int nn = n - 1;
    int idx = k - 1;

    while(nn != 0) {
        // if(a[idx] == 9) idx --;

        a[idx] += (nn >= 9 ? 9 : nn);
        idx --;
        nn -= (nn >= 9 ? 9 : nn);
    }

    rep(i, 0, k) cout << a[i];
    cout << " ";

    rep(i, 0, k) a[i] = 0;

    nn = n;
    idx = 0;

    while(nn != 0) {
        // if(a[idx] == 9) idx --;

        a[idx] += (nn >= 9 ? 9 : nn);
        idx ++;
        nn -= (nn >= 9 ? 9 : nn);
    }

    rep(i, 0, k) cout << a[i];
    // cout << " ";


    


    // rrep(i, k - 1, 0) cout << a[i];

    cout << endl;

}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}