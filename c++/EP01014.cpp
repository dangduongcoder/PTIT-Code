//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {

    int arr[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0 ; i < 10 ; i ++) {
        sum += n/arr[i];
        n = n % arr[i];
    }

    cout << sum << endl;

}

int main() {
    fastio;

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}