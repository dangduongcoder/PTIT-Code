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

    ll x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    ll l = abs((x1) - (x2));

    // double c = (double)l / 2;

    // double r = sqrt(pow(y1,2) + pow(l - c ,2)) + sqrt(pow(y2, 2) + pow(c, 2));

    double r = sqrt(pow(y1 + y2, 2) + pow(l, 2));

    cout << fixed << setprecision(10) << r << endl;




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