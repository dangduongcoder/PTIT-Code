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

    ll arr[n];

    for (int i = 0 ; i < n ; i ++) {
        cin >> arr[i];
    }

    // sort(arr, arr + n);

    int cnt = 0;

    for (int i = 0 ; i < n ; i ++) {
        if (arr[i] == 0){
            cnt ++;
        } else {
            cout << arr[i] << " ";
        }
    }

    for (int i = 0 ; i < cnt ; i ++) {
        cout << "0 ";
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