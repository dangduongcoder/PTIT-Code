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

    int arr[n];

    for (int &i : arr) {
        cin >> i;
    }

    int m = -1;

    for (int i = 0 ; i < n - 1 ; i ++) {
        for (int j = i + 1 ; j < n ; j ++) {
            if (arr[i] < arr[j]) {
                m = (arr[j] - arr[i] > m ? arr[j] - arr[i] : m);
            }
        }
    }

    cout << m << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}