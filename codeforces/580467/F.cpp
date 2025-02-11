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
const int MAX_VAL = 1000000 + 7;


void solve() {

}

int main() {
    fastio;
    
    int n;
    cin >> n;

    vi arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vi mark(MAX_VAL, 0);

    for (int x : arr) {
        for (int j = 1; j * j <= x; j++) {
            if (x % j == 0) {
                mark[j]++;
                if (j != x / j) {
                    mark[x / j]++;
                }
            }
        }
    }

    for (int i = 1; i < MAX_VAL; i++) {
        mark[i] += mark[i - 1];
    }

    int q;
    cin >> q;
    
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        
        cout << mark[r] - mark[l - 1] << endl;
        // cout << -1;
    }

    

    return 0;
}