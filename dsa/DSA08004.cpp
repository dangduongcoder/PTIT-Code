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

    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt['Z' - 'A' + 3];

    memset(cnt, 0, sizeof(cnt));

    for(char x : s) cnt[x - 'A'] ++;

    priority_queue<ll> deq;

    rep(i, 0, 27) 
        if(cnt[i] > 0) deq.push(cnt[i]);

    rep(i, 0, n) {
        ll x = deq.top();
        x --;
        deq.pop();
        if (x < 0) {
            deq.push(0);
        } else {
            deq.push(x);
        }
    }

    ll res = 0;

    while(!deq.empty()) {
        res += deq.top() * deq.top();
        deq.pop();
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