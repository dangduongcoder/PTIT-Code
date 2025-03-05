//Duong
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

#define int ll

int arr[10000 + 7];

int gcd(int a, int  b) {
    while (b)
    {
        int t = a % b;
        a = b;
        b = t;
    }

    return a;
}

void init() {

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;

    for (int i = 3 ; i <= 10000 + 3 ; i ++) {
        arr[i] = arr[i - 1] / gcd(arr[i - 1], i) * i;
    }


}

void solve() {

    int n;
    cin >> n;
    cout << arr[n] << endl;

}

int32_t main() {
    fastio;

    init();

    int testCase; cin >> testCase;

    while (testCase --) {
        solve();
    }
    

    return 0;
}