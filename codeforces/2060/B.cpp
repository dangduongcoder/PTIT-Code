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

    int n, m;
    cin >> n >> m;

    int arr[n][m];
    int way[n];
    int ok = 1;

    // if (m == 1 && n == 1) {
    //     cout << 1 << endl;
    //     return;
    // }


    REP(i, n) {
        REP(j, m) {
            cin >> arr[i][j];
        }
        way[i] = i;
        // ok[i] = 1;
        sort(arr[i], arr[i] + m);
    }

    FOR(i, 0, n - 1){
        FOR(j, i + 1, n){
            if(arr[i][0] > arr[j][0]) {
                swap(way[i], way[j]);
            }
        }
    }

    // int l = arr[way[n-1]][0];
    int l = -1;

    // cout << l << "-" << endl;

    // REP(i, n) {
    //     REP(j, m){
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }

    for (int i = 0 ; i < m && ok ; i ++) {
        for (int j : way) {
            if (arr[j][i] <= l) {
                ok = 0;
                // cout << "==|" << arr[j][i] << "_" << l << endl;
                break;
            }

            // cout << "==" << arr[j][i] << "_" << l << endl;

            l = arr[j][i];
        }
    }

    // cout << ok << "-" << endl;

    if (ok) {
        REP(i, n){
            cout << way[i] + 1 << " ";
        }
    } else {
        cout << -1 ;
    }

    cout << endl;

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