//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

ll fibo[95];

void init() {

    fibo[0] = 0 ;
    fibo[1] = 1 ;
    fibo[2] = 1 ;

    for (int i = 3 ; i < 95 ; i ++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

}

void solve() {
    int n;
    cin >> n;
    cout << fibo[n] << endl;
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