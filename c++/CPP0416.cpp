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

    int cnt = 0;

    int arr[n];

    for (int &i : arr) {
        cin >> i;
    }

    for (int i = 0 ; i < n - 1; i ++) {
        for (int j = i + 1 ; j < n ; j ++) {
            if (arr[i] + arr[j] == k) {
                cnt ++;
            }
        }
    }

    cout << cnt << endl;
}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}