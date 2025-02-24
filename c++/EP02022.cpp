//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int t = 1;

void solve() {

    cout << "Test " << t++ << ":" << endl;

    int n, m, k;
    cin >> n >> m >> k;   

    int a[n], b[m];

    for (int i = 0 ; i < n ; i ++) {
        cin >> a[i];
    }

    for (int i = 0 ; i < m ; i ++) {
        cin >> b[i];
    }


    for (int i = 0 ; i < n ; i ++) {
        if (i == k) {
            for (int j = 0 ; j < m ; j ++) {
                cout << b[j] << " ";
            }
        }
        cout << a[i] << " ";
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