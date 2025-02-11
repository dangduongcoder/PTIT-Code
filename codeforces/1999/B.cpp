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

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int r = 0;

    r += (a > c) && (b > d);
    r += (a > d) && (b > c);
    r += (b > c) && (a > d);
    r += (b > d) && (a > c);


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