//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

ll nt[10000 + 5] = {0};
int cnt[10000 + 5];


void init() {
    for (int i = 0 ; i < 10000 + 5 ; i ++) {
        nt[i] = 0;
        cnt[i] = 1;
    }

    // nt[0] = 0; nt[1] = 0;

    for (int i = 2 ; i < 10000 + 5 ; i ++) {
        if (nt[i] == 0) {
            for (int j = i ; j < 10000 + 5 ; j += i) {
                nt[j] ++;
                cnt[j] *= i;
            }
        }
    }
}


void solve() {


    int n;
    cin >> n;
    

    if ((nt[n] == 3) && (cnt[n] == n)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    // cout << nt[n] << " " << cnt[n] << endl;

}

int main() {
    fastio;

    init();

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }

    // for (int i = 0 ; i < 10000 ; i ++) {
    //     cout << i << " " << nt[i] << " " << cnt[i] << endl;
    // }
    

    return 0;
}