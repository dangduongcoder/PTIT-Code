//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


const int N = 1e6 + 7;

int nt[N];

void init() {
    nt[0] = 0;
    nt[1] = 0;

    for (int i = 2; i < N ; i ++) {
        nt[i] = 1;
    }

    for (int i = 2 ; i * i < N ; i ++) {
        if (nt[i]) {
            for (int j = i * i ; j < N ; j += i) {
                nt[j] = 0;
            }
        }
    }

}

void solve() {
    int n, m;
    cin >> n >> m;


    for (int i = n ; i <= m ; i ++) {
        if (nt[i]) {
            cout << i << " ";
        }
    }

    cout << endl;
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