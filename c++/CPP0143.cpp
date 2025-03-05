//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


ll fib[97];

void init() {
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;

    for (int i = 1; i <= 92 ; i ++) {
        fib[i + 2] = fib[i] + fib[i + 1];
    }
}

void solve() {
    int n;
    cin >> n;
    cout << fib[n] << endl;
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