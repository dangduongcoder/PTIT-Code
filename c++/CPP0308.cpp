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

    int cnt[300];

    memset(cnt, 0, sizeof(cnt));

    for (int i = 0 ; i < s.size() ; i ++) {
        cnt[s[i]] ++;
    }

    for (int i = 0 ; i < s.size() ; i ++) {
        if (cnt[s[i]] == 1) {
            cout << s[i];
        }
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