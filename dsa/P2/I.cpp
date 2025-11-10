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


vector<ll> CNT(ll n) {
    vector<ll> cnt(10, 0);
    if (n < 0) {
        cnt[0] = -1;
        return cnt;
    }
    if (n == 0) {
        cnt[0] = 0;
        return cnt;
    }

    ll fac = 1;
    while(fac <= n) {
        ll low = n % fac;
        ll cur = (n / fac) % 10;
        ll high = n / (fac * 10);

        rep(d, 0, 10) {
            if (d != 0) {
                cnt[d] += high * fac;
                if (cur > d) cnt[d] += fac;
                else if (cur == d) cnt[d] += low + 1;
            } else {
                if(high > 0) {
                    cnt[0] += (high - 1) * fac;
                    if (cur > 0) cnt[0] += fac;
                    else if (cur == 0) cnt[0] += low + 1;
                } 
            }
        }
        fac *= 10;
    }
    return cnt;
}

void solve() {

    ll a, b;
    cin >> a >> b;

    if (a > b) swap(a, b);

    vector<ll> uA = CNT(a - 1);
    vector<ll> uB = CNT(b);

    rep(i, 0, 10) {
        ll res = uB[i] - uA[i];
        cout << (res != -1 ? res : 0) << " ";
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