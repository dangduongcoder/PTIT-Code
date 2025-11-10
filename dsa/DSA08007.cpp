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

    string tar;

    for (int i = 0 ; i < s.size() ; i ++) {
        if (s[i] > '1') {
            for (int j = i ; j < s.size() ; j ++) tar += '1';
            break;
        } else if (s[i] == '1') {
            tar += '1';
        } else {
            tar += '0';
        }
    }

    ll res = 0;

    // cout << tar << '-' << s << endl;

    int cnt = s.size() - 1;

    for (char a : tar) {
        res += (a-'0')*(ll)(pow(2, cnt --));
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