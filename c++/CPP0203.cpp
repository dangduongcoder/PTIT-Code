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
    int t;

    for (int i = 0 ; i < n ; i ++) {
        cin >> t;
        if (t >= 1) {
            se.insert(t);
        } 
    }

    int index =  1;

    for (int i : se) {
        if (index != i) {
            // cout << index << endl;
            // return;
            break;
        }
        index ++;
    }
    cout << index << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}