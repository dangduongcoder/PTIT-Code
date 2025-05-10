//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, k ; 
    cin >> n >> k;

    int arr[n];

    for (int &i : arr) {
        cin >> i;
    }

    sort(arr, arr + n);

    for (int i = 0 ; i < n ; i ++) {
        if (binary_search(arr, arr + n, arr[i] - k)) {
            cout << 1 << endl;
            return;
        }
    }

    cout << -1 << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}