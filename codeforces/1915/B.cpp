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

    string s[3];
    
    REP(i, 3){
        cin >> s[i];
    };

    int row[3] = {0, 0, 0}, col[3] = {0, 0, 0};

    REP(i, 3){
        REP (j, 3) {
            col[j] += s[i][j];
            row[i] += s[i][j];
        }
    }

    REP(i, 3) {
        if (col[i] != 198 || row[i] != 198) {
            cout << ((char)(198 - min(col[i], row[i]) + '?')) << endl;
            break;
        }

        // cout << col[i] << " " << row[i] << endl;
    }

    // cout << row[0] << " " << col[0] << endl;

    // cout << endl;

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