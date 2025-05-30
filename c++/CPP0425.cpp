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

    int r[n];
    int index = 0;

    sort(arr, arr + n);

    for (int i = 0 ; i < n ; i ++) {
        if (i % 2 == 0) {
            r[i] = arr[index ++];
        }
    }

    for (int i = 0 ; i < n ; i ++) {
        if (i % 2 == 1) {
            r[i] = arr[index ++];
        }
    }

    for (int i : r) {
        cout << i << " ";
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