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
const int N = 1e6+7;

int nt[N];

void init() {
    rep(i, 0, N) nt[i] = 1;

    nt[0] = nt[1] = 0;

    rep(i, 2, sqrt(N)) {
        if (nt[i]) {
            for (int j = i * i ; j < N ; j += i) {
                nt[j] = 0;
            }
        }
    }

}

void solve() {

    int n;
    cin >> n;

    for (int i = 2 ; i <= n / 2 ; i ++) {
        if (nt[i] && nt[n - i]) {
            cout << i << " " << n - i << endl;
            return;
        }
    }

    cout << - 1 << endl;


}

int main() {
    init();
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}