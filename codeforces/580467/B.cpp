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
#define int ll

const int MOD = 1e9 + 7;
const ll INF = 1e18;



bool check(ll n) {
    if (n < 2) {
        return false;
    }

    if (n == 2 || n == 3) {
        return true;
    }

    if (n % 2 == 0) {
        return false;
    }

    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int32_t main() {
    fastio;
    
    // snt();

    ll n;
    cin >> n;

    if (n < 2) {
        cout << -1;
        return 0;
    }

    for (ll i = 2 ; i * i <= n ; i ++) {
        if (n % i == 0 && check(i)) {
            cout << i ;
            return 0;
        }
    }

    if(check(n)){
        cout << n;
    } else {
        cout << -1;
    }

    return 0;
}