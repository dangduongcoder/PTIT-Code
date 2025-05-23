//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n, k;

    cin >> n >> k;

    int l = n * n;

    int arr[l];

    for (int i = 0 ; i < l ; i ++) {
        cin >> arr[i];
    }

    sort(arr, arr + l);

    cout << arr[k - 1] << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}