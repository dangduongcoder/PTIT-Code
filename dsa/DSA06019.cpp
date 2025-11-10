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

bool cmp(pii a, pii b) {

    if (a.first != b.first)
        return a.first > b.first;
    else 
        return a.second < b.second;
}

void solve() {

    int n;
    cin >> n;

    map<int, int> mp;

    rep(i, 0, n) {
        int t;
        cin >> t;
        mp[t] ++;
    }

    vector<pii> v;

    for(auto i : mp) {
        // cout << i.first << " " << i.second << endl;
        v.push_back({i.second, i.first});
    }

    sort(all(v), cmp);

    for (pii i : v) {
        // cout << i.second << " " << i.first << endl;
        rep(j, 0, i.first) cout << i.second << " ";
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