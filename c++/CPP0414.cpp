//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int n;
    cin >> n;

    set<int> se;

    string t;

    for (int i = 0 ; i < n ; i ++) {
        cin >> t;
        for (int j = 0 ; j < t.size() ; j ++) {
            se.insert(t[j] - '0');
        }
    }

    for (int i : se) {
        cout << i << " ";
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