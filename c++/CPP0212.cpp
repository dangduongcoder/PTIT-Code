//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


ll mu(ll a, ll b) {
    ll r = 1;

    for (int i = 0 ; i < b ; i ++) {
        r *= a;
        r = r % MOD;
    }

    return r % MOD;


}

void solve() {

    int n, x;
    cin >> n >> x;

    ll sum = 0;

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];

        sum += (arr[i] * mu(x, n - i - 1)) % MOD;

    }


    cout << sum % MOD << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}