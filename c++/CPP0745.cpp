//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

ll arr[1000 + 5];

void init() {

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;

    for (int i = 3 ; i <= 1000 ; i ++) {
        arr[i] = (arr[i - 1] % MOD + arr[i - 2] % MOD)  % MOD;
    }

}

void solve() {
    int n;
    cin >> n;
    cout << arr[n] << endl;
}

int main() {
    fastio;

    init();

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}