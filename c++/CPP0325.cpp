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

    int sc = 0, sl = 0;

    for (int i = 0 ; i < s.size() ; i ++) {
        if (i % 2 == 0) {
            sc += s[i] - '0';
        } else {
            sl += s[i] - '0';
        }
    }

    cout << (abs(sc - sl) % 11 == 0) << endl;
    

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}