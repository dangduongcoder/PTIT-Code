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

int n, k, vs;
vector<string> v;

void bt(int x) {
    if (x == k - 1) {
        cout << endl;
        return;
    }

    if (x == 0) {
        rep(i, x, vs - 1) {
            cout << v[i] << " "; 
            bt(x + 1);
        }
    } else {
        rep(i, x, vs) {
            cout << v[i] << " "; 
            bt(x + 1);
        }
    }

}


void solve() {

    cin >> n >> k;


    set<string> se;

    string s;

    rep(i, 0, n) {
        cin >> s ;
        se.insert(s);
    }

    for (string s: se) {
        v.push_back(s);
    }

    vs = sz(v);

    sort(all(v));

    rep(i, 0, sz(v)) cout << v[i] << " ";

    bt(0);


}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}