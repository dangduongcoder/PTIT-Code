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

    int arr[n];

    rep(i, 0, n) cin >> arr[i];

    vector<vector<int>> vvi;
    vector<int> tmp;

    rep(i, 0, n) tmp.push_back(arr[i]);

    vvi.push_back(tmp);

    int i = 0;

    while (sz(vvi[i]) > 1)
    {
        vector<int> vi;
        rep(j, 0, sz(vvi[i]) - 1) vi.push_back(vvi[i][j] + vvi[i][j + 1]);
        vvi.push_back(vi);
        i ++;
    }

    vector<string> res;

    for(vector<int> v : vvi) {
        string s = "[";
        for(int i : v) s += to_string(i) + " ";
        s[sz(s) - 1] = ']';
        res.push_back(s);
    }
    reverse(all(res));
    for(string s : res) cout << s << " ";
    cout << endl;
    


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}