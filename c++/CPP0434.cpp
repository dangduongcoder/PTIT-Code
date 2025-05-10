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
    
    vector<int> arr;

    for (int i = 0 ; i < n ; i ++) {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    ll res[n];

    res[0] = arr[0] * arr[1];
    res[n - 1] = arr[n - 1] * arr[n - 2];

    for (int i = 1 ; i < n - 1 ; i ++) {
        res[i] = arr[i - 1] * arr[i + 1];
    }

    for (int i = 0 ; i < n ; i ++) {
        cout << res[i] << " ";
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