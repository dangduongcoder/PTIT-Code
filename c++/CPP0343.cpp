//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    string s, n;
    getline(cin, s);

    int c = 0, l = 0;

    stringstream ss(s);

    while (ss >> n)
    {
        // cout << (n[n.size() - 1] - '0') << endl;
        if ((n[n.size() - 1] - '0') % 2 == 0) {
            c ++;
        } else {
            l ++;
        }
    }
    

    cout << 
        ((
            ((c + l) % 2 == 0 && c > l) ||
            ((c + l) % 2 == 1 && l > c)
        ) ? "YES" : "NO" )
    << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;
    cin.ignore();

    while (testCase --) {
        solve();
    }
    

    return 0;
}