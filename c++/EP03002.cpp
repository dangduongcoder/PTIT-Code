//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    string s1, s2, w;

    // cin >> s1 >> s2;
    
    getline(cin, s1);
    getline(cin, s2);
    

    // cout << s1 << "\n" << s2 << endl; 

    stringstream ss1(s1);
    stringstream ss2(s2);

    vector<string> ws1, ws2;

    while (ss1 >> w) ws1.push_back(w);
    while (ss2 >> w) ws2.push_back(w);

    // cout << ws1.size() << endl;

    set<string> cnt;
    set<string> r;

    for (string s : ws2) {
        cnt.insert(s);
    }

    for (string s : ws1) {
        if (cnt.count(s) < 1) {
            // cout << s << " ";
            r.insert(s);
        }
    }

    for (string s : r) {
        cout << s << " ";
    }

    cout << endl;
    

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