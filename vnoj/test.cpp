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

int main() {
    fastio;

    int n; cin >> n;
    int m; cin >> m;

    string s[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> s[i];
    }

    int arr[n][m];

    for (int i = 0 ; i < m ; i ++) {
        arr[n-1][i] = (int)s[n-1][i];
    }

    for (int i = 0 ; i < m ; i ++) {
        for (int j = n - 2 ; j >= 0 ; j --) {
            arr[j][i] = arr[j + 1][i] + (int)s[j][i];
        }   
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < m ; j ++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}