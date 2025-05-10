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

    int arr[n][n];

    int cnt[n + n + 1];

    memset(cnt, 0, sizeof(cnt));

    for (int i = 0 ; i < n ; i ++) {
        for (int j = 0 ; j < n ; j ++) {
            cin >> arr[i][j];
        }
    }

    // if (n == 1) {
    //     cout << 2 << " " << 1 << endl;
    //     return;
    // }


    int r[n + n + 1];

    r[2] = arr[0][0];


    cnt[r[2]] ++;


    int ix = 1, iy = 1;

    for (int i = 3 ; i <= n + n ; i ++) {
        if (ix == iy) {
            r[i] = arr[ix - 1][++iy - 1];
        } else {
            r[i] = arr[++ix - 1][iy - 1];
        }
        cnt[r[i]] ++;
    }


    for (int i = 1 ; i <= n + n ; i ++) {
        if (cnt[i] == 0) {
            r[1] = i;
            break;
        }
    }

    for (int i = 1 ; i <= n + n ; i ++) {
        cout << r[i] << " ";
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