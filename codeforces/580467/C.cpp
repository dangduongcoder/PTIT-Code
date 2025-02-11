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

    int n;
    cin >> n;

    int arr[n][n];

    REP(i, n) {
        REP(j, n) {
            cin >> arr[i][j];
        }
    }

    string type;
    cin >> type;

    if (type == "X") {
        REP(i, n) {
            REP(j, n) {
                cout << arr[i][n - j - 1] << " ";
            }
            cout << endl;
        }
    } else if (type == "Y") {
        REP(i, n) {
            REP(j, n) {
                cout << arr[n - i - 1][j] << " ";
            }
            cout << endl;
        }
    } else if (type == "L") {
        REP(i, n) {
            REP(j, n) {
                cout << arr[j][n - i - 1] << " ";
            }
            cout << endl;
        }
    } else {
        REP(i, n) {
            REP(j, n) {
                cout << arr[n - j - 1][i] << " ";
            }
            cout << endl;
        }
    }
    

    return 0;
}