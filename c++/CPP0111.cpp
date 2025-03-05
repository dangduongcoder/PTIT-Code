//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    string s;
    cin >> s;

    for (int i = 0 ; i < s.size() - 1 ; i ++) {
        if (abs(s[i] - s[i + 1]) != 1) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}