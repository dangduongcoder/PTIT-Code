//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
    fastio;

    int n, k, b;
    cin >> n >> k >> b;

    vector<int> pos(b + 2);

    pos[0] = 0;
    pos[b + 1] = n + 1;

    for (int i = 1 ; i <= b ; ++ i) {
        cin >> pos[i];
    }

    sort(pos.begin(), pos.end());

    int res = INT_MAX;

    for (int i = 0 ; i <= b ; ++ i) {
        int tar = pos[i] + k;
        int j = lower_bound(pos.begin(), pos.end(), tar) - begin(pos);

        if (j > b + 1) continue;

        int gap = (pos[j] == tar) ? j - i : j - i - 1;

        if (gap < res) res = gap; 
    }

    cout << res;

    return 0;
}