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
    // getline(cin, s);

    int len = s.size();

    // cout << s[len - 1] << endl;

    int s1 = (int)s[len - 6] - '0';
    int s2 = (int)s[len - 5] - '0';
    int s3 = (int)s[len - 4] - '0';
    int s4 = (int)s[len - 2] - '0';
    int s5 = (int)s[len - 1] - '0';
    
    // cout << s << endl;
    // cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << " " << endl;

    bool i1 = (s1 < s2 && s2 < s3 && s3 < s4 && s4 < s5);
    bool i2 = (s1 == s2 && s2 == s3 && s3 == s4 && s4 == s5);
    bool i3 = (s1 == s2 && s2 == s3 && s4 == s5);
    bool i4 = (
        (s1 == 6 || s1 == 8) && 
        (s2 == 6 || s2 == 8) && 
        (s3 == 6 || s3 == 8) && 
        (s4 == 6 || s4 == 8) && 
        (s5 == 6 || s5 == 8)
    );

    cout << ((i1 || i2 || i3 || i4) ? "YES" : "NO") << endl;

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