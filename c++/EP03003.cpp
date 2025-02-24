//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    //26

    string s;
    int n;
    cin >> s >> n;

    int cnt[27];

    for (int i = 0 ; i < 27 ; i ++) {
        cnt[i] = 0;
    }

    for (int i = 0 ; i < s.size() ; i ++) {
        if (s[i] <= 'z' && s[i] >= 'a') {
            cnt[s[i] - 'a'] ++;
        }
    }

    int alr = 0, miss = 0;

    for (int i = 0 ; i <= 'z'-'a' ; i ++) {
        if (cnt[i] > 0) {
            alr ++;
        } 
    }

    if (alr + n >= 26 && alr + n <= s.size()) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    // cout << alr << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}