//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int cnt[100000 + 5];

    int n, m;
    cin >> n >> m;

    for (int i = 0 ; i < 100000 + 5 ; i ++) {
        cnt[i] = 0;
    }

    int a1[n], a2[m];

    for (int i = 0 ; i < n ; i ++) {
        cin >> a1[i];
        cnt[a1[i]] ++;
    }

    for (int i = 0 ; i < m ; i ++) {
        cin >> a2[i];
    }

    for (int i = 0 ; i < m ; i ++) {
        for (int j = 0 ; j < cnt[a2[i]] ; j ++) {
            cout << a2[i] << " ";
        }
        cnt[a2[i]] = 0;
    }

    for (int i = 0 ; i < 100000 + 5 ; i ++) {
        if (cnt[i] > 0) {
            for (int j = 0 ; j < cnt[i]; j ++) {
                cout << i << " ";
            }
        }
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