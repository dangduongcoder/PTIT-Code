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

    int c[27];

    memset(c, 0, sizeof(c));

    for (char a : s) {
        if (a >= 'A' && a <= 'Z') {
            c[a - 'A'] ++;
        } else {
            sum += a - '0';
        }
    }


    for (int i = 0 ; i < 27 ; i ++) {
        if (c[i] > 0) {
            for (int j = 0 ; j < c[i] ; j ++) {
                cout << char('A' + i);
            }
        }
    }

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