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
const int lim = 2 * 1e5 + 5;

void solve() {

    int n;

    cin >> n;

    int pre[n];
    int markm[lim];
    int mark[lim];

    REP(i, lim) {
        mark[i] = 0;
        markm[i] = 0;
    }
    int t;

    cin >> pre[0];

    if (pre[0] >= 0) {
        mark[pre[0]] ++;
    } else {
        markm[-pre[0]] ++;
    }

    int ok = 0;

    FOR(i, 1, n) {
        cin >> t;
        pre[i] = pre[i - 1] + ((i % 2 == 0) ? t : (-t));

        if (pre[i] == 0 && !ok) {
            ok = 1;
        }

        if (pre[i] >= 0) {
            if(++mark[pre[i]] >= 2){
                ok = 1;
            };
        } else {
            if(++markm[-pre[i]] >= 2){
                ok = 1;
            };
        }
    }

    if (ok) {
        cout << "YES" << endl;
        return;
    }; 
    
    // REP(i, n) cout << pre[i] << " ";
    // cout << n << endl;

    // cout << endl;

    // REP(i, lim) {
    //     // cout << ((mark[i] > 0) ? mark[i] : "") << " ";
    //     if (mark[i] >= 2 || markm[i] >= 2) {
    //         cout << "YES" << endl;
    //         return;
    //     }
    // }

    // cout << endl;

    cout << "NO" << endl;  

    
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