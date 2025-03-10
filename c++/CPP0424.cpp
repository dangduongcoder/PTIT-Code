//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, m;

    cin >> n >> m;

    int arr[n * m];

    for (int i = 0 ; i < n * m ; i ++) {
        cin >> arr[i];
    }

    sort(arr, arr + n * m);

    for (int i = 0 ; i < n * m ; i ++) {
        cout << arr[i] << " ";
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