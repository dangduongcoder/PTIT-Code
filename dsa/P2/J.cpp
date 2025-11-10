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

struct task {
    int dl;
    ll prof;
};

bool cmp(task a, task b) {
    if (a.dl == b.dl) return a.prof > b.prof;
    return a.dl < b.dl;
}

void solve() {

    int n;
    cin >> n;
    vector<task> tasks(n);

    rep(i, 0, n) cin >> tasks[i].dl >> tasks[i].prof;

    sort(all(tasks), cmp);

    priority_queue<ll, vector<ll>, greater<ll>> pq;

    ll res = 0;

    rep(i, 0, n) {
        pq.push(tasks[i].prof);
        res += tasks[i].prof;

        if (sz(pq) > tasks[i].dl) {
            res -= pq.top();
            pq.pop();
        }
    }

    cout << res ;

}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}