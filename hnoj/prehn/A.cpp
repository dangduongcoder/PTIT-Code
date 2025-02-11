#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define sz(x) (int)(x).size()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define debug(x) cerr << #x << " = " << x << endl;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

}

int main() {
    fastio;

    freopen("DEMHN.INP", "r", stdin);
    freopen("DEMHN.OUT", "w", stdout);

    string s;
    cin >> s;

    int k;
    cin >> k;

    vi dp;

    int cN = 0;

    for (int i = sz(s) - 1; i >= 0 ; i --) {
        if (s[i] == 'N') {
            cN ++;
        }

        if (s[i] == 'H') {
            dp.pb(cN);
        }
    }

    ll r = 0;


    // for (int i = k - 1 ; i >= 0 ; i --) {
    for (int j = sz(dp) - 1 ; j >= 0 ; j --) {
        r += ((dp[j] * k) % MOD + (((k * (k-1))/2) * cN) % MOD) % MOD;
    }
    // }

    cout << r % MOD;



    return 0;
}