//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

vector<pair<char, int>> zip(string s) {
    vector<pair<char, int>> res;
    if (s.empty()) return res;

    char c = s[0];
    int cnt = 1;

    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] == c) ++cnt;
        else {
            res.emplace_back(c, cnt);
            c = s[i];
            cnt = 1;
        }
    }
    res.emplace_back(c, cnt);
    return res;
}

void solve() {
    string s1, s2;

    cin >> s1 >> s2;

    vector<pair<char, int>> z1 = zip(s1), z2 = zip(s2);

    if (z1.size() != z2.size()) {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0 ; i < z1.size() ; i ++) {
        if (!(z1[i].first == z2[i].first && z2[i].second >= z1[i].second && z2[i].second <= z1[i].second * 2)) {
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