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
const int MOD = 1e9+9;
const int N = 1e9+7;

void solve() {

    int n, m, k;
    cin >> n >> m >> k;
    
    int A[n], B[m];

    for (int &i : A) cin >> i;
    for (int &i : B) cin >> i;

    int maxA = *max_element(A, A+n);
    int minB = *min_element(B, B+m);

    vector<int> rA, rB;

    for (int &i : A) if (i > minB) rA.pb(i);
    for (int &i : B) if (i < maxA) rB.pb(i);

    sort(all(rA));
    sort(all(rB));

    int dp[rA.size()];

    for (int i : rA) {
        cout << i << " ";
    } cout << endl;

    for (int i : rB) {
        cout << i << " ";
    } cout << endl;

    // cout << lower_bound(all(rB), 4) - rB.begin() << endl;

    for (int i = 0 ; i < rA.size() ; i ++) {
        dp[i] = lower_bound(all(rB), rA[i]) - rB.begin();
    }

    for (int i : dp) {
        cout << i << " ";
    } cout << endl;

    ll res = 0;

    for (int i = 0 ; i < rA.size() - k + 1 ; i ++) {
        if (dp[i + k - 1] - dp[i] >= k - 1) {
            int tmp = 1;
            // res += (dp[i + k - 1] - 2) % MOD;
            // cout << res << endl;
            for (int j = 0 ; j < k ; j ++) {
                cout << "log:" << dp[i + j] << endl;
                tmp *= (dp[i + j] - j);
                tmp %= MOD;
            }
            res += tmp;
        }
    }
    cout << res % MOD;

}

int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}