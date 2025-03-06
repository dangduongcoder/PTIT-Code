//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int cnt[500000 + 6];

    memset(cnt, 0, sizeof(cnt));

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
        cnt[arr[i]] ++;
    }

    int res = 0;

    for (int i = 0 ; i < 500000 + 6 ; i ++) {
        if (cnt[i] > 1) {
            res += cnt[i];
        }
    }

    cout << res << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}