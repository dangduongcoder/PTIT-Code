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

    int n;
    cin >> n;;

    int a[n], d[n];
    ll sum = 0;
    ll ma = 0, mi = INF;

    REP(i, n) {
        cin >> a[i];
        sum += a[i];
        ma = (a[i] > ma) ? a[i] : ma;
        mi = (a[i] < mi) ? a[i] : mi;
    };
    REP(i, n) cin >> d[i];

    // cout << sum << " " << ma << " " << mi << endl;

    ll r = 1;

    REP(i, n) {
        int t = 0;
        if (d[i] > ma) {
            t = sum - mi - a[i];
        } else {
            t = sum - mi - ma - a[i] + d[i];
        }

        r = (t > r) ? t : r;
    }

    cout << r << endl;

}

int main() {
    fastio;

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }
    


    return 0;
}