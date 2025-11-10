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

    ll n, t;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq;

    rep(i, 0, n) {
        cin >> t;
        pq.push(t);
    }

    ll sum = 0;

    while (pq.size() != 1)
    {
        ll a = pq.top(); pq.pop();
        ll b = pq.top(); pq.pop();
        ll r = (a + b) % MOD;
        sum += r;
        sum %= MOD;
        // cout << sum << " ";
        pq.push(r);
    }
    
    cout << sum << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}