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

    string rv = s;
    reverse(rv.begin(), rv.end());

    if (s == rv) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}   

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}