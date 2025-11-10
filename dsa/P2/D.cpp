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
    cin >> n >> k;

    vector<int> a(n);

    rep(i, 0, n) cin >> a[i];

    sort(all(a));

    int gr = 0;

    int i = 0;

    while(i < n) {
        gr ++;

        if (i == N - 1) {
            break;
        }

        int start = i;

        int j = i + 1;

        while (j < n) {
            if ( a[j] - a[j - 1] <= k) j ++;
            else break;
        }

        if (j - start == 1 && j < n) {
            if (a[j] - a[start] <= k) j ++;
        }
        i = j;
    }

    cout << gr << endl;

}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}