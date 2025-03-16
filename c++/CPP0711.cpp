//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n;

    cin >> n;

    string s = "";
    string t = "";

    for (int i = 0 ; i < n ; i ++) {
        s += "0";
        t += "1";
    }

    cout << s << " ";

    while (s != t)
    {
        for (int i = n - 1 ; i >= 0 ; i --) {
            if (s[i] == '0') {
                s[i] = '1';
                break;
            } else {
                s[i] = '0';
            }
        }

        cout << s << " ";
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