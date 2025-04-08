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

    int arr[n];

    for (int &i : arr) {
        cin >> i;
    }

    int sum[n];
    sum[0] = arr[0];

    for (int i = 1 ; i < n ; i ++) {
        sum[i] = sum[i - 1] + arr[i];
    }

    int r = -1;

    for (int i = 1 ; i < n - 1 ; i ++) {
        if (sum[i - 1] == sum[n-1] - sum[i]) {
            r = i + 1;
            break;
        }
    }

    cout << r << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}