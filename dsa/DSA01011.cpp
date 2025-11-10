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

    int n; cin >> n;
    string s;
    cin >> s;
    cout << n << " ";

    rrep(i, sz(s) - 2 , 0) {
        if (s[i] < s[i + 1] ) {
            rrep(j, sz(s) - 1, i) {
                if(s[j] > s[i]) {
                    swap(s[j], s[i]);
                    reverse(s.begin() + i + 1, s.end());
                    cout << s << endl;
                    return;
                }
            }
        }
    }

    cout << "BIGGEST" << endl;



}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}