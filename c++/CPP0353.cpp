//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int t9[] = {
    2, 2, 2,  
    3, 3, 3,  
    4, 4, 4,  
    5, 5, 5,  
    6, 6, 6,  
    7, 7, 7, 7,
    8, 8, 8,  
    9, 9, 9, 9 
};


void solve() {

    string s;
    cin >> s;
    
    int len = s.size();

    for (int i = 0 ; i < len/2 ; i ++) {
        s[i] = (s[i] <= 'Z' && s[i] >= 'A') ? s[i] : s[i] - 'a' + 'A';
        s[len - i - 1] = (s[len - i - 1] <= 'Z' && s[len - i - 1] >= 'A') ? s[len - i - 1] : s[len - i - 1] - 'a' + 'A';
        if (t9[s[i] - 'A'] != t9[s[len - i - 1] - 'A']) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
    
}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}