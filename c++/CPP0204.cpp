//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 5;

int nt[100000 + 5];

void init() {
    for (int i = 0 ; i < N ; i ++) {
        nt[i] = 1;
    }

    nt[0] = nt[1] = 0;

    for (int i = 2 ; i * i < N ; i ++) {
        if (nt[i]) {
            for (int j = i * i ; j < N ; j += i) {
                nt[j] = 0;
            }
        }
    }
}


void solve() {
    int l, r;
    cin >> l >> r;
    int cnt = 0;

    for (int i = l ; i <= r ; i ++) {
        cnt += nt[i];
        // cout << nt[i] << endl;
    }

    cout << cnt << endl;
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