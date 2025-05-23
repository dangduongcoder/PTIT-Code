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

    int n, m;
    cin >> n >> m;

    string s1, s2;

    cin >> s1 >> s2;

    int t = 0;

    REP(i, sz(s1)) {
        t += s1[i];
    }


    int sum[m];

    sum[0] = s2[0];

    FOR(i, 1, m) {
        sum[i] = sum[i - 1] + s2[i];
    }

    int r = 0;

    FOR(i, n - 1, m) {
        if (sum[i] - sum[i - n] == t) {
            r ++;
        }
    }

    cout << r;

    return 0;
}