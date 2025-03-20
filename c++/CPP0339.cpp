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

    ll r = 0;

    map<char, int> mp;

    int cnt['z'-'a'+3];
    memset(cnt, 0, sizeof(cnt));

    for (int i = 0 ; i < s.size() ; i ++) {
        cnt[s[i]-'a'] ++;
    }

    for (int i = 0 ; i < 'z'-'a'+3 ; i ++) {
        if (cnt[i] > 0) {
            r += cnt[i] + (cnt[i] * (cnt[i] - 1))/2;
        }
    }

    cout << r << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}