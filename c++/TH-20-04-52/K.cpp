//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

const int N = 1e6 + 5;

void solve() {
    int n;
    cin >> n;

    int arr[n];
    int sor[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
        sor[i] = arr[i];
    }

    sort(sor, sor + n);

    for (int i = 0 ; i < n ; i ++) {
        if (arr[i] != sor[n - 1]) {
            cout << *upper_bound(sor, sor + n, arr[i]) << " ";
        } else {
            cout << "_ ";
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