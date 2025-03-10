//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    string s, t;
    getline(cin, s);
    stringstream ss(s);

    vector<string> vs;

    while (ss >> t)
    {
        vs.push_back(t);
    }
    

    for (int i = vs.size() - 1 ; i >= 0 ; i --) {
        cout << vs[i] << " ";
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