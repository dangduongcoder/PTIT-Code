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
    string s;
    cin >> s;

    int len = sz(s);
    int m[len/2];
 
    for (int i = 0 ; i < len/2 ; i ++) {
        m[i] = abs(s[i] - s[len - i - 1]);
    }

    ll sum = 0;

    for (int i = 0 ; i < len/2 ; i ++) {
        sum += m[i];
    }

    cout << sum << endl;
}

int main() {
    fastio;
    
    int n; cin >> n;

    while (n--)
    {
        solve();
    }
    

    return 0;
}