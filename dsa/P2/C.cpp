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

int pr[N];
ll fre[N];

void init() {
    rep(i, 0, N) pr[i] = 1;

    pr[0] = pr[1] = 0;

    for (int i = 2 ; i < N ; i ++) {
        if (pr[i] == 1) {
            for (int j = i; j < N ; j += i) {
                pr[j] = i;
            }
        }
    }

    fre[1] = 0;

    rep(i, 2, N){
        fre[i] = fre[i - 1] + pr[i];
    }
}

void solve() {

    int l, r;
    cin >> l >> r;

    cout << fre[r] - fre[l - 1];

    cout << endl;


}

int main() {
    init();
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}