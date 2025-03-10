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

    set<int> se;

    if(s[0] == '0') {
        cout << "INVALID" << endl;
        return;
    }

    for (char c : s) {
        if (c <= '9' && c >= '0') {
            se.insert(c - '0');
        } else {
            cout << "INVALID" << endl;
            return;
        }
    }

    cout << (se.size() == 10 ? "YES" : "NO") << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}