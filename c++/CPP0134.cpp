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

    int no = n;

    if (n == 1) {
        cout << -1 << endl;
        return;
    }

    vector<int> sto;

    for (int i = 2 ; i * i <= no ; i ++) {
        while (n % i == 0)
        {
            sto.push_back(i);
            n /= i;
        }
    }

    if (sto.size() == 0 && k == 1) {
        // sto.push_back(no);
        cout << no;
    } else {
        if (k <= sto.size()) {
            cout << sto[k - 1];
        } else {
            cout << -1;
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