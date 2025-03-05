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

    int arr[n][n];

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            if (i % 2 == 0) {
                cout << arr[i][j] << " ";
            } else {
                cout << arr[i][n - j - 1] << " ";
            }
        }
    }
    cout << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}