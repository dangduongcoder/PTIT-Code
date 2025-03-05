//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;   
const ll INF = 1e18;
 
/*

2
5 2
1 2 3 4 5
1 2 3 4 0
0 1 2 3 4

*/

void solve() {
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }

    // cout << k % n << endl;

    for (int i = (k % n) ; i < n ; i ++) {
        cout << arr[i] << " ";
    }

    if (k % n != 0) {
        for (int i = 0 ; i < (k % n) ; i ++) {
            cout << arr[i] << " ";
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