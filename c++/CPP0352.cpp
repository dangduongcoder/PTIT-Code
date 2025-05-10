//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

map<string, int> mp;

void solve() {
    string s, t;
    string mail = "";

    getline(cin, s);

    stringstream ss(s);

    vector<string> name;

    while (ss >> t)
    {
        name.push_back(t);
    }

    for (char a : name.back()) {
        mail += (char)tolower(a);
    }

    for (int i = 0 ; i < name.size() - 1 ; i ++) {
        mail += (char)tolower(name[i][0]);
    }

    // mail += "@ptit.edu.vn";

    mp[mail] ++;

    if (mp[mail] < 2) {
        cout << mail << "@ptit.edu.vn" << endl;
    } else {
        cout << mail << mp[mail] << "@ptit.edu.vn" << endl;
    }
    

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