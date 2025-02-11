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

#define int ll

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int x, y, k;
    cin >> x >> y >> k;

    if (x == 0 && y == 0) {
        cout << 0 << endl;

        return;
    }

    if (x == 1 && y == 1) {
        cout << 2 << endl;

        return;
    }

    int max_sqrt = min(x, y) / k;

    ll r = max_sqrt * 2;


    x -= max_sqrt * k;
    y -= max_sqrt * k;

    if (!(x == 0 && y == 0)) {
        if (x > y) {
            r += ceil((float)x / k) * 2 - 1;
        } else {
            r += ceil((float)y / k) * 2;
        }
    }

    

    // cout << max_sqrt << " " << x << " " << y << " " <<  r << endl;
    
    cout << r << endl;
}

int32_t main() {
    fastio;

    int n;
    cin >> n;

    while (n--)
    {
        solve();
    }
    

    return 0;
}