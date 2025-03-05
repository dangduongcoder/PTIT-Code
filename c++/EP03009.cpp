//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    string s1;
    string s2;

    cin >> s1 >> s2;

    int len1 = s1.size(), len2 = s2.size(), i = 0;

    i = 0;

    while (len1 + i < max(len1, len2) + 1)
    {
        s1 = "0" + s1;
        i ++;
    }

    i = 0;

    while (len2 + i < max(len1, len2) + 1)
    {
        s2 = "0" + s2;
        i ++;
    }
    
    // cout << s1 << endl;
    // cout << s2 << endl;

    vector<int> res;

    int r = 0;
    for (int i = max(len1, len2) ; i >= 0 ; i --) {
        int t = (s1[i] + s2[i] - 2*'0') + r;
        res.push_back(t % 10);
        r = t / 10;
    }

    if (res[res.size() - 1] == 0) res.pop_back(); 

    for (int i = res.size() - 1 ; i >= 0 ; i --) {
        cout << res[i];
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