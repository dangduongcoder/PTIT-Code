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

    int p = 0;
    int m = 9999;
    int idx = -1;

    rep(i, 0, sz(s)) {
        if(s[i] == 'I') {
            p += 1;
        } else {
            p -= 1;
        }
        if (p < m) {
            idx = i;
            m = p;
        }
    }

    deque<int> deq;

    deq.push_back(1);

    // cout << m << " " << idx << endl;

    rrep(i, idx - 1, 0) {
        deq.push_front((s[i] == 'I' ? deq.front() - 1 : deq.front() + 1));
    }

    rep(i, idx + 1, sz(s)) {
        deq.push_back((s[i] == 'I' ? deq.back() + 1 : deq.back() - 1));
    }

    while (!deq.empty())
    {
        cout << deq.front();
        deq.pop_front();
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