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

ll len[93];

void find(ll n, ll i) {
    if (n == 1) {
        cout << "0" << endl;
        return;
    }
    if (n == 2) {
        cout << "1" << endl;
        return;
    }

    if (i <= len[n - 2]) find(n - 2, i);
    else find(n - 1, i - len[n - 2]);
}

void solve() {

    ll n, k;
    cin >> n >> k;

    find(n, k);


}

int main() {

    len[1] = 1; len[2] = 1;
    rep(i, 3, 93) len[i] = len[i - 2] + len[i - 1];


    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}