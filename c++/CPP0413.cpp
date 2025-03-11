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

    sort(arr, arr + n);

    for (int i = 0 ; i < n / 2 ; i ++) {
        cout << arr[n - 1 - i] << " ";
        cout << arr[i] << " ";
    }

    if (n % 2 == 1) {
        cout << arr[n/2];
    }

    cout << endl;

}

int main() {
    fastio;

    int n;
    // cout << &n << endl;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}