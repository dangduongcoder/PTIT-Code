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

    int k;
    cin >> k;

    string s;
    cin >> s;

    map<int, int> mp;

    for(char a : s) {
        mp[a] ++;
    }

    priority_queue<int> pq;

    for(auto e : mp) {
        // cout << e.first << " " << e.second << endl;
        pq.push(e.second);
    }

    rep(i, 0, k) {
        int t = pq.top();
        t --;
        pq.pop();
        pq.push(t);
    }

    ll res = 0;

    while(!pq.empty()) {
        ll i = pq.top();
        pq.pop();
        res += i * i;
    }

    cout << res << endl;


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}