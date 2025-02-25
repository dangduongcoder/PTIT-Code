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

    int s1 = (int)s[5] - '0';
    int s2 = (int)s[6] - '0';
    int s3 = (int)s[7] - '0';
    int s4 = (int)s[9] - '0';
    int s5 = (int)s[10] - '0';
    
    cout << s << endl;
    cout << s1 << s2 << s3 << s4 << s5 << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}