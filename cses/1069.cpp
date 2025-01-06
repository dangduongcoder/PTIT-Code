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

int main() {
    fastio;

    string s;
    cin >> s;

    int len = sz(s);

    int dp[len];
    dp[0] = 1;   

    for (int i = 1 ; i < len ; i ++) {
        dp[i] = s[i] == s[i - 1] ? dp[i - 1] + 1 : 1;
    }

    int max = 0;

    FOR(i, 0, len) {
        if (dp[i] > max) max = dp[i]; 
    }

    cout << max;

    return 0;
}