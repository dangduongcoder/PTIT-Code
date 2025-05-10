//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n;
    cin >> n;

    ll arr[n];

    for (ll &i : arr) {
        cin >> i;
    }

    sort(arr, arr + n);

    for (int i = 0 ; i < n - 2 ; i ++) {
        for (int j = i + 1 ; j < n - 1 ; j ++) {
            ll t = arr[i]*arr[i] + arr[j]*arr[j];
            ll s = (ll)sqrt(t);
            if (s * s == t) {
                if (binary_search(arr, arr + n, s)) {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }

    cout << "NO" << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}