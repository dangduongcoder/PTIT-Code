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


    bool ok = true;
    int n; cin >> n;

    int arr[n];

    rep(i, 0, n) arr[i] = 0;
    vector<string> v;

    do
    {

        bool good = true;
        string s = "";

        rep(i, 0, n - 1) if (arr[i] == arr[i + 1] && arr[i] == 0) good = false;

        if (good && arr[0] == 0 && arr[n - 1] == 1) {
            // rep(i, 0, n) cout << (arr[i] ? "A" : "H");
            rep(i, 0, n) s += (arr[i] ? "A" : "H");
            // cout << endl;
            v.pb(s);
        }

        

        int cnt = 0;

        rep(i, 0, n) cnt += arr[i];

        if (cnt == n) ok = false;

        for (int i = n - 1 ; i >= 0 ; i --) {
            if (arr[i] == 0) {
                arr[i] = 1;
                break;
            } else {
                arr[i] = 0;
            }
        }

        
    } while (ok);
    
    // cout << endl;

    sort(all(v));

    rep(i, 0, sz(v)) cout << v[i] << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}