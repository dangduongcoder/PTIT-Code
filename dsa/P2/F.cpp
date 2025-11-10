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


    string s;
    cin >> s;

    int n = s.size();

    vector<int> ex(256, 0);
    int need = 0;

    for (char c : s) {
        if (!ex[(unsigned char)c]) {
            ex[(unsigned char)c] = 1;
            need ++;
        }
    }

    vector<int> cnt(256, 0);
    int have = 0;
    int l = 0;
    int ans = n;
    rep(r, 0, n) {
        if(cnt[(unsigned char)s[r]] ++ == 0) have++;
        while (have == need && l <= r)
        {
            ans = min(ans, r - l + 1);
            if (--cnt[(unsigned char)s[l]] == 0) {
                --have;
                // cnt[(unsigned char)s[l]] --;
            }
            ++l;
        }
        
    }

    cout << ans << endl;


}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}