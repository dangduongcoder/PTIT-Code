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

    long long x, y;
    cin >> y >> x;

    long long m = max(x, y);

    long long step = 0;

    if (y > x) {
        step = y - 1 + m - x;
    } else {
        step = y - 1;
    }

    //chan tang, le giam

    // cout << m << " " << step << endl;

    long long val = (m % 2 == 0 ? ( (m-1) * (m-1) + 1 + step) : (m * m - step));

    cout << val << endl;

}

int main() {
    fastio;

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    

    return 0;
}