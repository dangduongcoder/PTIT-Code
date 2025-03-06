//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int a, b;
    cin >> a >> b;

    ll arr1[a], arr2[b];

    for (int i = 0 ; i < a ; i ++) {
        cin >> arr1[i];
    }

    for (int i = 0 ; i < b ; i ++) {
        cin >> arr2[i];
    }

    sort(arr1, arr1 + a);
    sort(arr2, arr2 + b);

    cout << arr1[a - 1] * arr2[0] << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}