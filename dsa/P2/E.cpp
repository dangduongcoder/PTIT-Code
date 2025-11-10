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

    vector<int> a(n + 1);

    rep(i, 1, n) cin >> a[i];

    set<int> st;

    rep(i, 1, n) st.insert(i);

    vector<vector<int>> ans;

    while (!st.empty())
    {
        vector<int> cur;
        int pos = *st.begin();
        int last = a[pos];
        cur.push_back(last);
        st.erase(pos);

        while (true)
        {
            auto it = st.upper_bound(pos);
            bool found = false;

            while (it != st.end())
            {
                if (a[*it] > last) {
                    pos = *it;
                    last = a[pos];
                    cur.push_back(last);
                    st.erase(it);
                    found = true;
                    break;
                }
                it ++;
            }
            if(!found) break;
        }
        ans.push_back(cur);
        
    }

    for(auto i : ans) {
        for(int j : i) cout << j << " ";
        cout << endl;
    }
    

}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}