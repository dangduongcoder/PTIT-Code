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

    stack<string> st;

    rep(i, 0, sz(s)) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string exp = string(1, s[i]);
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            st.push(exp + s2 + s1);
        } else {
            st.push(string(1, s[i]));
        }
    }

    cout << st.top() << endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}