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

    ll mi = 1e9 + 5;

    for (int i = 0 ; i < n - 1 ; i ++) {
        for (int j = i + 1 ; j < n ; j ++) {
            mi = (abs(mi) > abs(arr[i] + arr[j]) ? arr[i] + arr[j] : mi);
        }
    }

    cout << mi << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}