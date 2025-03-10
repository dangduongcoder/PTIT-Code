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
    
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            k--;
            n /= i;


            if (k == 0) {
                cout << i << endl;
                return;
            }
        }
    }
    
    if (n > 1 && k == 1) cout << n << endl;
    else cout << -1 << endl;
    

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}