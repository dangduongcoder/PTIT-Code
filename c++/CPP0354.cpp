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

    char mark = s[0];
    int cnt = 1;
    
    cout << mark;

    for (int i = 1 ; i < s.size() ; i ++) {
        if (s[i] != s[i - 1]) {
            mark = s[i];
            cout << cnt << mark;
            cnt = 1;
            continue;
        }
        cnt ++;
    }

    cout << cnt;

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