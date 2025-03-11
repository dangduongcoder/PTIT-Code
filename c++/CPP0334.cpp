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

    int sum = 0;
    int t = 0;
    int ok = 1;

    for (char c : s) {
        if (c <= '9' && c >= '0') {
            ok = 1;
            t = t * 10 + (c - '0');
        } else {
            // cout << t << endl;
            sum += t;
            ok = 0;
            t = 0;
        }
    }

    // cout << t << endl;
    sum += t;
    cout << sum << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}