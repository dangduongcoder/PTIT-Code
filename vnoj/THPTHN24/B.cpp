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
    

    int n, l, r;

    cin >> n >> l >> r;

    int arr[n];

    int c = 0, t = 0;


    for (int i = 0 ; i < n ; i ++) {
        cin >> t;
        if (t <= r) {
            arr[c] = t;
            c++;
        }
    }

    sort(arr, arr + c);

    int r = 1e9;

    for (int i = c - 1 ; i >= 0 ; c --) {
        for (int j = 0 ; j < c ; j ++) {

        }
    }


    return 0;
}