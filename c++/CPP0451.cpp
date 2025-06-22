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

    int arr[1000000] = {0};

    // memset(arr, 0, sizeof(arr));

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }

    int k, x; 
    cin >> k >> x;

    int z = lower_bound(arr, arr + n, x) - arr;

    if (arr[z] == x) {
        for (int i = z - k / 2 ; i < z ; i ++) {
            if (i >= 0) {
                cout << arr[i] << " ";
            } else {
                cout << 0 << " ";
            }
        }

        for (int i = z + 1 ; i <= z + k / 2 ; i ++) {
            if (i < n) {
                cout << arr[i] << " ";
            } else {
                cout << 0 << " ";
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