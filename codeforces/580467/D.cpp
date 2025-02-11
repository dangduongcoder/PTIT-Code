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
    
    ll n;
    cin >> n;

    vi num;

    if (n <= 1) {
        cout << n;
        return 0;
    }

    

    while (n!= 1)
    {
        int ok = 0;
        for (int i = 9 ; i >= 2 ; i --) {
            if (n % i == 0) {
                num.pb(i);
                ok = 1;
                n /= i;
                break;
            }
        }

        if (ok) {
            continue;
        }

        cout << "-1";
        return 0;
    }

    for (int i = sz(num) - 1; i >= 0 ; i --) {
        cout << num[i];
    }
    


    return 0;
}