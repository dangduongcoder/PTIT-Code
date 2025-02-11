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

    int arr[n];

    REP(i, n) {
        cin >> arr[i];
    }

    short int mark[1000000 + 7];
    short int sum[1000000 + 7];

    REP(i, 1000000 + 7) {
        mark[i] = 0;
        sum[i] = 0;
    }

    REP(i, n) {
        for (int j = 1; j * j <= arr[i] ; j ++) {
            if (arr[i] % j == 0) {
                mark[j] += 1;
                mark[arr[i]/j] += 1;
            }
        }
    }

    sum[0] = 0;

    FOR(i, 1, 1000000 + 7) {
        sum[i] = sum[i - 1] + mark[i];
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << sum[r] - sum[l - 1] << endl;
        // cout << -1;
    }



    return 0;
}
