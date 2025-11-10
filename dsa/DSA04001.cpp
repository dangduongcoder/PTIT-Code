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

ll pm(ll n, ll k) {
    if (k == 0) return 1;
    ll r = pm(n, k/2);
    if (k % 2 == 0) return (r * r) % MOD;
    else return (((r * r) % MOD) * n) % MOD;
}

void solve() {


    ll n, m, k;
    cin >> n;
    m = n;
    k = 0;
    while (m != 0)
    {
        k = k * 10 + m % 10;
        m /= 10;
    }

    cout << pm(n, k) << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}