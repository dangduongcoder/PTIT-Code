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
    string s; cin >> s;
    stack<char> st;
    rep(i, 0, sz(s)) {
        char c = s[i];
        if (isalnum(c)) cout << c;
        else if (c == '(') st.push(c);
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                cout << st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        } else {
            while (!st.empty() && st.top() != '(') {
                char t = st.top();
                int p1 = (t == '+' || t == '-') ? 1 : (t == '*' || t == '/') ? 2 : (t == '^') ? 3 : 0;
                int p2 = (c == '+' || c == '-') ? 1 : (c == '*' || c == '/') ? 2 : (c == '^') ? 3 : 0;
                if (p1 > p2 || (p1 == p2 && c != '^')) {
                    cout << t;
                    st.pop();
                } else break;
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        if (st.top() != '(') cout << st.top();
        st.pop();
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