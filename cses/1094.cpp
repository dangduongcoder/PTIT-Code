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

    int n;
    cin >> n;
    int arr[n];

    FOR(i, 0, n) {
        cin >> arr[i];
    }   

    ll sum = 0;

    FOR (i, 1, n) {
        if (arr[i] < arr[i - 1]) {
            sum += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }

    cout << sum;
    

    return 0;
}