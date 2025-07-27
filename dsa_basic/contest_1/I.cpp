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
const int N = 500 + 10;

int nt[N];


void init() {
    for(int i = 0 ; i < N ; i ++) {
        nt[i] = 1;
    }

    nt[0] = nt[1] = 0;

    for (int i = 2 ; i <= sqrt(N) ; i ++) {
        if (nt[i]) {
            for (int j = i * i ; j < N ; j += i) {
                nt[j] = 0;
            }
        }
    }
}

ll solve(ll n, ll p) {

    ll e = 0;
    while (n > 0) {
        n /= p;
        e += n;
    }

    return e;


}

int main() {
    fast_io;
    // int t = 1;
    // cin >> t;
    // while (t--) solve();
    init();

    ll k, n;
    while (cin >> n >> k){
        // cin >> n >> k;
        ll res = 1;
        for (int i = 2; i <= N ; i ++) {
            if (nt[i]) {
                ll e = solve(n, i) - solve(k, i) - solve(n - k, i);
                if (e > 0) res *= (e + 1);
            }
        }

        cout << res << endl;
    }
    
    return 0;
}