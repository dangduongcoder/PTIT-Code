//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, q;
    cin >> n >> q;

    int arr[n];

    for (int &i : arr) {
        cin >> i;
    }

    int sum[n];
    sum[0] = arr[0];

    for (int i = 1 ; i < n ; i ++) {
        sum[i] = arr[i] + sum[i - 1]; 
    }

    for (int i = 0 ; i < q ; i ++) {
        int l, r;
        cin >> l >> r;

        cout << sum[r - 1] - (l != 1 ? sum[l - 2] : 0) << endl;
    }

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}