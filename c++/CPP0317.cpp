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

    int len = s.size();

    for (int i = 0 ; i < len/2 + 1 ; i ++) {
        if (!(s[i] == s[len - i - 1] && (s[i] - '0') % 2 == 0)) {
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