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


    if ((n < 4 && n >= 2) || n < 1) {
        cout << "NO SOLUTION";
        return 0;
    }   

    if (n == 4) {
        cout << "2 4 1 3";
        return 0;
    }

    for (int i = 1 ; i <= n ; i += 2) {
        cout << i << " ";
    }

    for (int i = 2 ; i <= n ; i += 2) {
        cout << i << " ";
    }

    return 0;
}