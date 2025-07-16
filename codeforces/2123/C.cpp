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

    int __min[n];

    int __max[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }

    __min[0] = arr[0];

    for (int i = 1 ; i < n ; i ++) {
        if (__min[i - 1] < arr[i]) {
            __min[i] = __min[i - 1];
        } else {
            __min[i] = arr[i];
        }
    }

    __max[n - 1] = arr[n - 1];

    for (int i = n - 2 ; i >= 0 ; i --) {
        if (__max[i + 1] > arr[i]) {
            __max[i] = __max[i + 1];
        } else {
            __max[i] = arr[i];
        }
    }

    // for (int i = 0 ; i < n ; i ++) {
    //     cout << __min[i] << " ";
    // }

    // cout << endl;

    // for (int i = 0 ; i < n ; i ++) {
    //     cout << __max[i] << " ";
    // }

    for (int i = 0 ; i < n ; i ++) {
        cout << ((arr[i] == __min[i] || arr[i] == __max[i]) ? 1 : 0) ;
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